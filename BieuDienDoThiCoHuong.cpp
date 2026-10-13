#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
vector<int> adj[10005];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        int V, E; cin >> V >> E;
        
        for(int i = 1; i <= E; i++){
            int v, e; cin >> v >> e;
             adj[v].push_back(e);
        }
        for(int i = 1; i <= V; i++){
            cout << i << ": ";
            for(auto x : adj[i]){
                cout << x << " ";
            }
            cout << endl;
        }
        for(int i = 1; i <= V; i++){
            adj[i].clear();
        }
    }
}
//Tran Trong Nghia
