#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, cnt;
int a[101][101];
bool visited[101];
vector<int> adj[101];
vector<int> ans[101];
void inp(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] && i < j){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
}
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front(); q.pop();
        ans[cnt].push_back(v);
        for(auto x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}
void solve(){
    memset(visited, false, sizeof(visited));
    cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            cnt++;
            bfs(i);
        }
    }
    cout << cnt << endl;
    for(int i = 1; i <= n; i++){
        sort(ans[i].begin(), ans[i].end());
        for(auto x : ans[i]){
            cout << x <<  " ";
        }
        cout << endl;
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    inp();
    solve();
}
//Tran Trong Nghia
