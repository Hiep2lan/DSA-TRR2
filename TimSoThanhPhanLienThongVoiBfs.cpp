#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n,m;
bool visited[1001];
int a[1001];
vector<int> adj[1001];
void ktao(){
    for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int top = q.front(); q.pop();
        for(auto x : adj[top]){
            if(!visited[x]){
                q.push(x); visited[x] = true;
            }
        }
    }
}
void lienthong(){
    int c = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            bfs(i); c++;
        }
    }
    cout << c << endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        ktao();
        lienthong();
    }
}
//Tran Trong Nghia
