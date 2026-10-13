#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m;
vector<int> adj[1005];
int color[1005];
void ktao(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    for(int i = 1; i <= m; i++){
        int x,y; cin >> x>> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(color, -1, sizeof(color));
}
bool bfs(int u){
    color[u] = 0;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int top = q.front(); q.pop();
        for(auto v : adj[top]){
            if(color[v] == -1){
                color[v] = 1- color[top];
                q.push(v);
            }
            else if(color[v] == color[top]) return false;  
    
        }
    }
    return true;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t ; while(t--){
        ktao();
        int ok = 1;
        for(int i = 1; i <= n; i++){
            if(color[i] == -1){
                if(!bfs(i)) {
                    ok = 0;
                    break;
                }

            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
//Tran Trong Nghia
