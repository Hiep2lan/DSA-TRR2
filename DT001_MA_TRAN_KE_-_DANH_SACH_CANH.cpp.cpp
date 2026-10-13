#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >>t;
    int n; cin >> n;
    vector<int> adj[n+1];
    int a[n+1][n+1];
    for(int i = 1; i<= n; i++){
        for(int j = 1; j<= n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1 && i > j){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    
    if(t== 1){
            for(int i = 1; i <= n; i++){
                    cout << adj[i].size() <<  " ";
            }
    }
    if(t==2 ){
        vector<pair<int, int>> v;
        for(int i= 1; i <= n; i++){
            for(auto x : adj[i]){
                if(i < x){
                    v.push_back({i, x});
                }
            }
        }
        cout << n << " " << v.size() << endl;
        for(auto x : v){
            cout << x.first << " " << x.second << endl;
        }
    }
}