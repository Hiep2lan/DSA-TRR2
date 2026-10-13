#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef long long ll;
const ll INF = 1e18;

struct Edge {
    int to;
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
    cin >> N >> M;
    int H1, S1, H2, S2;
    cin >> H1 >> S1 >> H2 >> S2;
    vector<vector<Edge>> adj(N + 1);
    for (int i = 0; i < M; ++i) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<ll> dH1, dS1, dH2, dS2;
    dijkstra(H1, N, adj, dH1);
    dijkstra(S1, N, adj, dS1);
    dijkstra(H2, N, adj, dH2);
    dijkstra(S2, N, adj, dS2);

    ll min1 = dH1[S1];
    ll min2 = dH2[S2];
    int count = 0;

    for (int i = 1; i <= N; ++i) {
        bool onPath1 = (dH1[i] + dS1[i] == min1);
        bool onPath2 = (dH2[i] + dS2[i] == min2);

        if (onPath1 && onPath2) {
            if (dH1[i] == dH2[i]) {
                count++;
            } else {
                if (i == S2 && dH1[i] >= dH2[S2]) count++;
                else if (i == S1 && dH2[i] >= dH1[S1]) count++;
            }
        } else if (onPath1 && i == S2) {
            if (dH1[S2] >= dH2[S2]) count++;
        } else if (onPath2 && i == S1) {
            if (dH2[S1] >= dH1[S1]) count++;
        }
    }
    for(auto[u, v, w] : canh){
        
        for(auto [a, b] : vector<pair<int,int>>{{u,v}, {v,u}}){
            if(dH1[a] + w + d3[b] == min1 && dH2[a] + w + d4[b] == min2){
                ll t1_st = dH1[a];
                ll t1_end = dH1[b];
                ll t2_st = dH2[a];
                ll t2_end = dH2[b];
                ll l = max(t1_st, t2_st);
                ll r = min(t1_end, t2_end);
                if(l < r){
                   cout <<"infinity\n";
                   return;
                }
            }
        }
    }

    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}