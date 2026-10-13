#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // freopen("DT.INP", "r", stdin);
    // freopen("DT.OUT", "w", stdout);
    int t; cin >> t;
    int n; cin >> n;
    vector<int> adj[n+1];
   
    for(int i = 1; i <= n; i++){
        int k; cin >> k;
        for(int j = 1; j <= k; j++){
            int x; cin >> x;
            adj[i].push_back(x);
            
        }
    }
    
    if(t == 1){
        for(int i = 1; i <= n; i++){
            cout << adj[i].size() << " ";
        }
    }
    if(t== 2){
         vector<pair<int,int>> v;
       for(int i = 1; i <=n; i++){
        for(auto x : adj[i]){
            if(i <x) v.push_back({i,x});
        }
       }
    int b[n+1][v.size()+1] = {0};
        for(int i = 0; i < v.size(); i++){
            b[v[i].first][i+1] = 1;
            b[v[i].second][i+1] =1;
        }
        cout << n << " " << v.size() << endl;
        for(int i = 1;i <= n; i++){
            for(int j = 1; j <= v.size(); j++){
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }

}
//Tran Trong Nghia
