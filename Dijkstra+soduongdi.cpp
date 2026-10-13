#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
const ll INF = 1e18;
int n, m;
vector<pair<int,int>> adj[100005];
void inp(){
    cin >> n >> m;
    for(int i = 1; i <=n ; i++) adj[i].clear();
    for(int i = 1; i <= m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
}
void solve(){
    vector<ll> dis(n+1, INF);
    vector<ll> path(n+1, 0);
    priority_queue<pair<ll, int>, vector<pair<ll,int>>, greater<>> pq;
    dis[1] = 0; path[1] = 1;
    pq.push({0, 1});
    while(!pq.empty()){
        auto [d, u] = pq.top(); pq.pop();
        if(d >dis[u]) continue;
        for(auto [v, w] : adj[u]){
            if(dis[v] > dis[u] + w){
                dis[v] = dis[u] + w;
                path[v] = path[u];
                pq.push({dis[v], v});
            }
            else if(dis[v] == dis[u]+w){
                path[v] += path[u];
            }
        }
    }
    cout << dis[n] << " " << path[n] << endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    inp();
    solve();
}
//Tran Trong Nghia
