#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, a[105][105];
vector<int> adj[105];
vector<pair<int,int>> v;
bool visited[105];
void ktao(){
    cin >> n;
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <=n ;j++){
            cin >> a[i][j];
            if(a[i][j] == 1 && i <j){
                adj[i].push_back(j);
                adj[j].push_back(i);
                v.push_back({i,j});
            }
        }
    }
    memset(visited, false, sizeof(visited));
}
void dfs(int u){
    visited[u] = true;
    for(auto v : adj[u]){
        if(!visited[v]) dfs(v);
    }
}
void dfs2(int u, int s, int t){
    visited[u] = true;
    for(auto v : adj[u]){
        if(u == s && v == t || u == t && v == s) continue;
        if(!visited[v]){
            dfs2(v,s,t);
        }
    }
}
void canhcau(){
    vector<pair<int,int>> ans;
    int tpltbd = 0;
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <=n; i++){
        if(!visited[i]){
            tpltbd++;
            dfs(i);
        }
    }
    for(auto it : v){
        int x = it.first, y = it.second;
        memset(visited, false, sizeof(visited));
        int dem = 0;
        for(int i = 1; i <=n; i++){
            if(!visited[i]){
                dem++;
                dfs2(i,x,y);
            }
        }
        if(dem > tpltbd) ans.push_back({x,y});
        
    }
    cout << ans.size() << endl;
    for(auto x : ans) cout << x.first <<" " << x.second << endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // freopen("TK.INP", "r", stdin);
    // freopen("TK.OUT", "w", stdout);
    ktao(); canhcau();
}
//Tran Trong Nghia
