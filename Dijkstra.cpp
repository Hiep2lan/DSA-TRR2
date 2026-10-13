#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m, k;
int par[1005];
vector<pair<int,int>> adj[1005];
void ktao(){
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    for(int i = 1; i <= m; i++){
        int x,y,z; cin >> x >> y >> z;
        adj[x].push_back({y,z});
        adj[y].push_back({x,z});
    }
}
void dijkstra(int s){
    vector<long long> d(n+1, 1e9);
    d[s] = 0;
    par[s] = s;
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> Q;
    Q.push({0,s});
    while(!Q.empty()){
        pair<ll,int> top = Q.top();
        Q.pop();
        ll kc = top.first, u = top.second;

        if(kc > d[u]) continue;
        for(auto x : adj[u]){
            int v = x.first, w = x.second;
            
            if(d[v] > d[u] + w){
                d[v] = d[u] +w;
                Q.push({d[v], v});
                par[v] = u;
            }
        }
    }
    for(int i = 1; i <= n; i++) cout << d[i] << " ";
    cout << endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        ktao();
        dijkstra(k);
        }
}
//Tran Trong Nghia
