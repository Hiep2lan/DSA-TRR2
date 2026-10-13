#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
        freopen("DT.INP", "r", stdin);
        freopen("DT.OUT", "w", stdout);
    int t; cin >> t;
    int n,m; cin >> n >> m;
      
    vector<int> adj[n+1];
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(t == 1){
        for(int i = 1; i <= n; i++){
            cout << adj[i].size() << " ";
        }
    }
    if(t== 2){
        cout << n << endl;
        for(int i = 1; i <= n; i++){
             cout << adj[i].size() << " " ;
            for(auto x: adj[i]){
                //if(x < i){
                    cout <<  x << " ";
                //}
                
            }
            cout << endl;
        }
    }

}
//Tran Trong Nghia
