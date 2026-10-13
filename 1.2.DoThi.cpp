#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int t; cin >> t;
    int n; cin >> n;
    int a[n+1][n+1];
    vector<int> adj[n+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1 && i > j){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    if(t == 1){
        for(int i = 1; i <= n; i++){
            cout << adj[i].size() << " ";
        }
    }
    if(t == 2){

        cout << n << endl;
        for(int i = 1; i <= n; i++){
            cout << adj[i].size() << " ";
            for(auto x: adj[i]){
                cout << x << " ";
            }
            cout << endl;
        }
    }
}

