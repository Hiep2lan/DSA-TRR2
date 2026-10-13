#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n;
vector<int> adj[105];
bool visited[105];
int a[105][105];
void ktao(){
    cin >> n;
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1 && i < j){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    memset(visited, false, sizeof(visited));
}
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int top  = q.front(); q.pop();
        for(auto v : adj[top]){
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
            }
        }
    }
}
void dinhtru(){
    int tpltbd = 0;
    vector<int> ans;
    memset(visited, false, sizeof(visited));
    for(int i = 1; i<= n; i++){
        if(!visited[i]){
            tpltbd++; bfs(i);
        }
    }
    for(int i = 1; i <= n; i++){
        int dem = 0;
        memset(visited, false, sizeof(visited));
        visited[i] = true;
        for(int j = 1; j <=n; j++){
            if(!visited[j]){
                dem++;
                bfs(j);
            }
        }
        if(dem > tpltbd){
            ans.push_back(i);
        }
    }
    cout << ans.size() << endl;
    for(auto x : ans) cout << x << " ";
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    ktao(); dinhtru();
}
//Tran Trong Nghia
