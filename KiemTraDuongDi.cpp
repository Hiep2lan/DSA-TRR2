#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n,m;
bool visited[1001];
vector<int> adj[1001]; 
void dfs(int u){
    visited[u] = true;
    for(auto v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
       
        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }
        for(int i = 1; i <= m; i++){
            int u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int q; cin >> q;
        while(q--){
            memset(visited, false, sizeof(visited));
            int x, y; cin >> x >> y;
            dfs(x);
            if(visited[y]) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}
//Tran Trong Nghia
