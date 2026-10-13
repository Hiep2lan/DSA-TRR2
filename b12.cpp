#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

typedef long long ll;
const ll INF = 1e18;

struct Edge {
    int to;
    ll w;
};

struct FullEdge {
    int u, v;
    ll w;
};

void dijkstra(int start, int n, const vector<vector<Edge>>& adj, vector<ll>& dist) {
    dist.assign(n + 1, INF);
    dist[start] = 0;
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    pq.push({0, start});
    while (!pq.empty()) {
        ll d = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        if (d > dist[u]) continue;
        for (auto& e : adj[u]) {
            if (dist[u] + e.w < dist[e.to]) {
                dist[e.to] = dist[u] + e.w;
                pq.push({dist[e.to], e.to});
            }
        }
    }
}

void solve() {
    int N, M;
    if (!(cin >> N >> M)) return;
    int H1, S1, H2, S2;
    cin >> H1 >> S1 >> H2 >> S2;

    vector<vector<Edge>> adj(N + 1);
    vector<FullEdge> edgeList;
    for (int i = 0; i < M; ++i) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
        edgeList.push_back({u, v, w});
    }

    vector<ll> dH1(N + 1), dS1(N + 1), dH2(N + 1), dS2(N + 1);
    dijkstra(H1, N, adj, dH1);
    dijkstra(S1, N, adj, dS1);
    dijkstra(H2, N, adj, dH2);
    dijkstra(S2, N, adj, dS2);

    ll min1 = dH1[S1];
    ll min2 = dH2[S2];

    // Kiểm tra vô tận: Đi cùng chiều và trùng khít thời gian trên một cạnh
    for (auto& edge : edgeList) {
        int nodes[2] = {edge.u, edge.v};
        for (int i = 0; i < 2; i++) {
            int u = nodes[i], v = nodes[1 - i];
            // Người 1 đi u->v, Người 2 cũng đi u->v
            bool p1 = (dH1[u] + edge.w + dS1[v] == min1);
            bool p2 = (dH2[u] + edge.w + dS2[v] == min2);
            if (p1 && p2) {
                ll t1_s = dH1[u], t1_e = dH1[v];
                ll t2_s = dH2[u], t2_e = dH2[v];
                if (max(t1_s, t2_s) < min(t1_e, t2_e)) {
                    cout << "infinity" << endl;
                    return;
                }
            }
        }
    }

    int count = 0;
    // 1. Gặp nhau tại Đỉnh
    for (int i = 1; i <= N; ++i) {
        if (dH1[i] + dS1[i] == min1 && dH2[i] + dS2[i] == min2) {
            if (dH1[i] == dH2[i]) count++;
        }
    }

    // 2. Gặp nhau ngược chiều giữa Cạnh
    for (auto& edge : edgeList) {
        int u = edge.u, v = edge.v;
        // P1: u->v, P2: v->u
        bool case1 = (dH1[u] + edge.w + dS1[v] == min1) && (dH2[v] + edge.w + dS2[u] == min2);
        // P1: v->u, P2: u->v
        bool case2 = (dH1[v] + edge.w + dS1[u] == min1) && (dH2[u] + edge.w + dS2[v] == min2);

        if (case1 || case2) {
            ll t1_s, t1_e, t2_s, t2_e;
            if (case1) { t1_s = dH1[u]; t1_e = dH1[v]; t2_s = dH2[v]; t2_e = dH2[u]; }
            else { t1_s = dH1[v]; t1_e = dH1[u]; t2_s = dH2[u]; t2_e = dH2[v]; }

            if (max(t1_s, t2_s) < min(t1_e, t2_e)) count++;
        }
    }

    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}