#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m, u;
bool visited[1001];
vector<int> adj[1001];

void nhap(){
     cin >> n >> m >> u;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
    memset(visited, false, sizeof(visited));
    

}
void dfs(int u){
    cout << u << " ";
    visited[u] = true;
    for(auto v : adj[u]){
        if(!visited[v]) dfs(v);
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        nhap();
        dfs(u);
        for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    cout << endl;
    }
}
//Tran Trong Nghia
