#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m, u, v;
bool visited[1005];
vector<int> adj[1005];
int parent[1005];
void inp(){
     cin >> n >> m >> u >> v;
     for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
    memset(visited, false, sizeof(visited));
    memset(parent, 0, sizeof(parent));
}
void bfs(int u){
    queue<int> q; q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front(); q.pop();
        for(auto x : adj[v]){
            if(!visited[x]){
                q.push(x); visited[x] = true;
                parent[x] = v;
            }

        }
    }
}
void path(int s, int t){
    bfs(s);
    if(!visited[t]) cout << " -1" << endl;
    else{
        vector<int> ans;
        while(t != s){
            ans.push_back(t);
            t = parent[t];
        }
        ans.push_back(s);
        reverse(ans.begin(), ans.end());
        for(auto x : ans) cout << x << " ";
        cout << endl;
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        inp();
        path(u ,v);
    }
}
//Tran Trong Nghia
