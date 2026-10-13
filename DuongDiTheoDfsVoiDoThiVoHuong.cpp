#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m, u, v;
vector<int> adj[1001];

int parent[1001];
bool visited[1001];
void dfs(int u){
    visited[u] = true;
    for(auto v : adj[u]){
        if(!visited[v]){
            parent[v] = u;
            dfs(v);
        }
    }
}
void path(int s, int t){
    memset(visited, false, sizeof(visited));
    memset(parent, 0, sizeof(parent));
    dfs(s);
    vector<int> ans;
    if(!visited[t]){
        cout << "-1" << endl;
    }
    else{
        while(t != s){
            ans.push_back(t);
            t = parent[t];
        }
        ans.push_back(s);
        reverse(ans.begin(), ans.end());
        for(auto x : ans) cout << x <<  " ";
        cout << endl;
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        cin >> n >> m >> u >> v;
        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        
        path(u, v);
    }
}
//Tran Trong Nghia
