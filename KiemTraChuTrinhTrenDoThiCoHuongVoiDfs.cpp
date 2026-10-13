#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m;
int color[1001], parent[1001];
vector<int> adj[1001];
void inp(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
    memset(color, 0, sizeof(color));
    memset(parent, 0, sizeof(parent));
}
bool dfs(int u){
    color[u] = 1;
    for(int v : adj[u]){
        if(color[v] == 0){
            parent[v] = u;
            if(dfs(v)) return true;
        }
        else if(color[v] == 1) return true;
    }
    color[u] = 2;
    return false;
    
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        inp();
        int ok = 1;
        for(int i = 1; i <= n; i++){
            if(color[i] == 0){
                if(dfs(i)){ 
                    cout << "YES" << endl;
                    ok = 0; break;
                }
            }

        }
        if(ok) cout << "NO" << endl;
    }
}
//Tran Trong Nghia
