#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m, s, t;
bool visited[1001];
int parent[1001];
vector<int> adj[1001];
void ktao(){
    for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    cin >> n >> m >> s >> t;
    
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);

    }
    
   // cin >> s >> t;
    memset(visited, false, sizeof(visited));
    memset(parent, 0, sizeof(parent));
}
void dfs(int u){
    visited[u] = true;
    for(auto v : adj[u]){
        if(!visited[v]){
            parent[v] =u;
            dfs(v);
           
        }
    }

}
void Path(int st, int e){
    dfs(st);
    vector<int> path;
    if(!visited[e]) {cout << "-1"; return;}
    else{
    while(st != e){
        path.push_back(e);
        e = parent[e];
    }
    path.push_back(st);
    reverse(path.begin(), path.end());
    for(auto x : path) cout << x << " ";
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T; cin >> T; while(T--){
        ktao();
        Path(s, t);
        cout << endl;
    }
}
//Tran Trong Nghia
