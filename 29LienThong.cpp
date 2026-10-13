#include <bits/stdc++.h>
using namespace std;

int n, a[101][101]; 
bool visited[101];
vector<int> adj[101], ans[101];
int cnt = 0;

void inp(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        adj[i].clear();
        ans[i].clear();
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1 && i < j){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
}

void dfs(int u){
    visited[u] = true;
    ans[cnt].push_back(u);
    for(auto v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

void solve(){
    cnt = 0;
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            cnt++;
            dfs(i);
        }
    }

    cout << cnt << endl;
    for(int i = 1; i <= cnt; i++){
        sort(ans[i].begin(), ans[i].end());
        for(auto x : ans[i]) cout << x << " ";
        cout << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);

    inp();
    solve();
}