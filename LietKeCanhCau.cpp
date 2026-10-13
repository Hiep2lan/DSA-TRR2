#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m;
bool vs[1005];
vector<int> adj[1005];
vector<pair<int,int>> v;
void ktao(){
    cin >> n >> m;
    for(int i = 1; i <=n; i++){
        adj[i].clear();
        v.clear();
    }
    for(int i = 1; i <= m; i++){
        int x,y; cin >> x>> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        v.push_back({x,y});
    }
    memset(vs, false, sizeof(vs));
}
void dfs(int u){
    vs[u] = true;
    for(auto v : adj[u]){
        if(!vs[v]) dfs(v);
    }
}
void dfs2(int u, int s, int t){
    vs[u] = true;
    for(auto v : adj[u]){
        if(u == s && v == t || u == t && v == s) continue;
        if(!vs[v]) dfs2(v,s,t);
    }
}
void lt(){
    int tplt = 0;
    for(int i = 1; i <= n; i++){
        if(!vs[i]){
            tplt++; dfs(i);
        }
    }
    for(auto it : v){
        memset(vs, false, sizeof(vs));
        int dem = 0;
        int x = it.first, y = it.second;
        for(int j = 1; j <= n; j++){
            if(!vs[j]){
                dem++;
                dfs2(j,x,y);
            }
        }
        if(dem > tplt) cout << x << " " << y << " ";
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
