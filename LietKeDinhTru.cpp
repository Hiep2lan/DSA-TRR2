#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m;
vector<int> adj[1005];
bool vs[1005];
void ktao(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    for(int i = 1; i <= m; i++){
        int x,y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(vs, false, sizeof(vs));
}
void dfs(int u){
    vs[u] = true;
    for(auto v : adj[u]){
        if(!vs[v]) dfs(v);
    }
}
void lt(){
    int tplt = 0;
    vector<int> ans;
    for(int i = 1; i <= n; i++){
        if(!vs[i]){
            tplt++;
            dfs(i);
        }
    }
    for(int i = 1; i <= n; i++){
        memset(vs, false, sizeof(vs));
        int dem = 0;
        vs[i] = true;
        for(int j = 1; j <= n; j++){
            if(!vs[j]){
                dem++; dfs(j);
            }
        }
        if(dem > tplt){
            cout << i << " ";
        }
    }
    cout << endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        ktao();
        lt();
    }
}
//Tran Trong Nghia
