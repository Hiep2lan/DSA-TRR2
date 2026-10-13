#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int a[105][105];
bool visited[105];
int n;
vector<int> adj[105];
void ktao(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1 && i <j){
                adj[i].push_back(j);
                adj[j].push_back(i);
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
void dinhcau(){
    int tplt = 0;
    vector<int> ans;
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            tplt++; dfs(i);
        }
    }
    for(int i = 1; i <= n; i++){
        int dem = 0;
        memset(visited, false, sizeof(visited));
        visited[i] = true;
        for(int j = 1; j <= n; j++){
            if(!visited[j]){
                dem++; dfs(j);
            }
        }
        if(dem > tplt){ 
             ans.push_back(i);
        }
    }
    cout  << ans.size() << endl;
    for(auto x : ans) cout <<x << " ";
    cout << endl;

} 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    ktao();
    dinhcau();
}
//Tran Trong Nghia
