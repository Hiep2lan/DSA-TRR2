#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, a[105][105];
vector<int> adj[105], ADJ[105];
bool visited[105];
vector<int> r_adj[105];
stack<int> st;
void ktao(){
    cin >> n;
    for(int i = 1; i <=n; i++){
        for(int j = 1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1 ){
                adj[i].push_back(j);
                r_adj[j].push_back(i);
                ADJ[i].push_back(j);
                ADJ[j].push_back(i);
            }
        }
    }
    memset(visited, false, sizeof(visited));

}
void dfs1(int u){
    visited[u] = true;
    for(auto v : adj[u]){
        if(!visited[v]) dfs1(v);
    }
    st.push(u);
}
void dfs2(int u){
   // memset(visited, false, sizeof(visited));
    visited[u] = true;
    for(auto v : r_adj[u]){
        if(!visited[v]) dfs2(v);
    }
}
void dfs3(int u){
    visited[u] = true;
    for(auto v : ADJ[u]){
        if(!visited[v]) dfs3(v);
    }
}
void sccc(){
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <=n ;i++){
        if(!visited[i]) dfs1(i);
    }
    int cnt = 0;
    memset(visited, false, sizeof(visited));
    while(!st.empty()){
        int u = st.top(); st.pop();
        if(!visited[u]){
            dfs2(u);
            cnt++;
        }
    }
    int ok = 2;
    if(cnt ==1) ok = 1;
    else{
        memset(visited, false, sizeof(visited));
        dfs3(1);
        for(int i = 1; i <=n ;i++){
            if(!visited[i]){
                ok = 0; break;
            }
        }
    
    }
    cout << ok;
    }
main(){
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    ktao(); sccc();
}
