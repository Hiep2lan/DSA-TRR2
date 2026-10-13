#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, a[105][105];
bool visited[105];
vector<int> adj[105];
vector<pair<int,int>> canh;
void ktao(){
    cin >> n;
    for(int i = 1; i <=n ;i++){
        for(int j = 1; j<= n; j++){
            cin >> a[i][j];
            if(a[i][j] ==1 && i < j){
                adj[i].push_back(j);
                adj[j].push_back(i);
                canh.push_back({i,j});
            }
        }
    }
    memset(visited, false, sizeof(visited));
}
void bfs(int u){
    queue<int> q; q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int top = q.front(); q.pop();
        for(auto v: adj[top]){
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
            }
        }
    }
}
void bfs2(int u, int s, int t){
    queue<int> q; q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int top = q.front(); q.pop();
        for(auto v : adj[top]){
            if(top == s && v == t || top == t && v == s) continue;
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
            }
        }
    }
}
void canhcau(){
    int tplt = 0;
    vector<pair<int,int>> ans;
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <=n; i++){
        if(!visited[i]){
            tplt++; bfs(i);
        }
    }
    for(auto v : canh){
        int x = v.first, y = v.second;
        int dem = 0;
        memset(visited, false, sizeof(visited));
        for(int j = 1; j <= n; j++){
            if(!visited[j]){
                dem++; bfs2(j, x, y);
            }
        }
        if(dem > tplt) ans.push_back({x,y});
    }
    cout << ans.size() << endl;
    for(auto x :  ans) cout << x.first << " " << x.second << endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    ktao(); canhcau();
}
//Tran Trong Nghia
