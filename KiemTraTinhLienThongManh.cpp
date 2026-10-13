#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m;
bool visited[1001];
vector<int> adj[1001], r_adj[1001];
stack<int> st;
void inp(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
            adj[i].clear();
            r_adj[i].clear();
        }
    for(int i =1; i <= m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        r_adj[y].push_back(x);
    }
}
void dfs1(int u){
    visited[u] = true;
    for(auto v : adj[u]){
        if(!visited[v]) dfs1(v);
    }
    st.push(u);
}
void dfs2(int u){
    visited[u] = true;
    //cout << u << " ";
    for(auto v : r_adj[u]){
        if(!visited[v]){ 
            dfs2(v);
        }
    }
}
void SCC(){
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]) dfs1(i);
    }
    cout << endl;
    memset(visited, false, sizeof(visited));
    int cnt = 0;
    while(!st.empty()){
        int v = st.top(); st.pop();
        if(!visited[v]){
            dfs2(v); 
            cnt++;
          //  cout<< endl;
            
        }
    }
    cout << cnt << endl;
    if(cnt == 1) cout << "YES" << endl;
    else cout << "NO\n";
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        inp(); 
        SCC();
        
        
    }
}
//Tran Trong Nghia
