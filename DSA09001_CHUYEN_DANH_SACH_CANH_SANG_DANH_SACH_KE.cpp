#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int V, e; 
        cin >> V >> e;
        //int a[V+1][V+1] = {0};  
        vector<int> adj[V+1];
        for(int i = 1; i <= e; i++){
            int u, v;
            cin >> u >> v;
            // a[u][v] = 1; 
            // a[v][u] = 1;
          //  if(u > v){
                adj[u].push_back(v);
                adj[v].push_back(u);
            //}
            

        }
       
        // vector<pair<int, int>> vec;
        // for(int i = 1; i <= V; i++){
        //     for(auto x : adj[i]){
        //        if(i < x) vec.push_back({i, x});
        //     }
        // }
        for(int i = 1; i <= V; i++){
            cout << i << ": ";
            for(auto x : adj[i]){
                cout << x << " ";
            }
            cout << endl;

        }
    }
}