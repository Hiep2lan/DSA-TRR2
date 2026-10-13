#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m, s, t; 
int a[1001], parent[1001];
vector<int> adj[1001];
bool visited[1001];
void ktao(){
    for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    memset(visited, false, sizeof(visited));
    cin >> n >> m >> s >> t;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
    
}
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front(); q.pop();
       // cout << v << " ";
        for(auto x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
                parent[x] = v;
            }
        }
    }
    //cout << endl;
}
void Path(){
    bfs(s);
    if(!visited[t]) cout << "-1" << endl;
    else{
        vector<int> path;
        while(t != s){
            path.push_back(t);
            t = parent[t];

        }
        path.push_back(s);
        reverse(path.begin(), path.end());
        for(auto x : path) cout << x <<  " ";
        cout << endl;
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        ktao();
        Path();    
    }
}
//Tran Trong Nghia
