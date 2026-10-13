#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int t, n, m; cin >> t >> n >> m;
    vector<int> adj[n+1];
    vector<pair<int, int>> vc;
    vc.push_back({0, 0});
    for (int i = 1; i <= m; i++)
    {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        vc.push_back({u,v});
    }
    if(t == 1){
        for(int i = 1; i <= n; i++){
                cout << adj[i].size() << " ";
            }
        }
    if(t == 2){
        int a[n+1][n+1] = {0};
        for(int i = 1; i < vc.size(); i ++ ){
            a[vc[i].first][i] = a[vc[i].second][i] = 1;
        }
        cout << n << " " << vc.size() - 1 << endl;
        for(int i = 1; i  <= n; i++){
            for(int j = 1; j < vc.size(); j++){
                cout << a[i][j] << " ";

            }
            cout << endl;
        }
    }    
    }

    


//Tran Trong Nghia
