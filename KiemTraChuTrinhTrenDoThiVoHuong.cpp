#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m;
bool visited[1001];
vector<int> adj[1001];
void inp(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}
bool DFS(int u, int par){
    visited[u] = true;
    for(auto v : adj[u]){
        if(!visited[v]){
            if(DFS(v, u)) return true;
        }
        else if(v != par) return true;
    }
    return false;
}
void solve(){
    for(int i = 1; i <= n; i++){
            if(!visited[i]){
                if(DFS(i, 0)){
                    cout << "YES" << endl;
                    return;
                }
            }
        }
        cout << "NO" << endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        inp();
        solve();
    }
}
//Tran Trong Nghia
