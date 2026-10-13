#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m;
bool vs[1005];
set<int> adj[1005];
vector<int> ans;
int parent[1005];
int st =1, en;
void ktao(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
       // parent[i] = -1;
    }
    ans.clear();
    for(int i = 1; i <= m; i++){
        int x,y; cin >>x >>y;
        adj[x].insert(y);
        adj[y].insert(x);
    }
    memset(vs, false, sizeof(vs));
}   
bool dfs(int u, int par){
    vs[u] = true;
    for(auto v : adj[u]){
        if(!vs[v]){
            parent[v] = u;
            if(dfs(v,u)) return true;
        }
        else if(v != par && v == st){ 
            en = u;
            return true;
        }
    }
    return false;
}
void path(int u, int v){
    vector<int> path;
    path.push_back(u);
    while(u != v){
        path.push_back(v);
        v = parent[v];
    }
    path.push_back(u);
    reverse(path.begin(), path.end());
    for(auto x : path) cout << x << " ";
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        ktao();
        if(dfs(1,0)){
            path(st,en);
           
        }
        else cout << "NO";
        cout << endl;    
    }
}
//Tran Trong Nghia
