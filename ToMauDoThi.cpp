#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m, k;
vector<int> adj[1005];
int color[1005];
void ktao(){
    cin >> n >> m >> k;
    for(int i = 1; i <= n ;i++){
        adj[i].clear();
    }
    for(int i = 1; i <=m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(color, 0, sizeof(color));
}
bool check(int u, int c){
    for(auto v : adj[u]){
        if(color[v] == c) return false;
    }
    return true;
}
bool Try(int u){
    if(u > n) return true;
    for(int c = 1; c <= k; c++){
        if(check(u,c)){
            color[u] = c;
            if(Try(u + 1))
                return true;

            color[u] = 0; 
        }
    }
    return false;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        ktao();
        if(Try(1)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
//Tran Trong Nghia
