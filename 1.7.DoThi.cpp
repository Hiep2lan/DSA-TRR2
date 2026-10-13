#include<bits/stdc++.h>
using namespace std;

main(){
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int t; cin >> t;
    int n; cin >>n;
    vector<int> adj[n+1];
    
    int a[n+1][n+1] = {0};
    for(int i = 1; i<= n; i++){
        int k; cin >> k;
       
            
        for(int j = 0; j < k; j++){
            int x; cin >> x;
            a[i][x] = 1;
            a[x][i] = 1;
            adj[i].push_back(x);
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
            for(int j = 1; j <= n; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}