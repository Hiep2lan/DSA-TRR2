#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n,s,t;
int a[105][105], par[105];
vector<pair<int,int>> adj[105];
void ktao(){
    cin >> n >> s>>t;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=n ;j++){
            cin >> a[i][j];
            if(a[i][j] != 0 && a[i][j] != 10000){
                adj[i].push_back({j, a[i][j]});
            }
        }
    }
}

void dijkstra(int s, int t){
    vector<ll> d(n+1, 1e9);
    d[s] = 0;
    par[s] = s;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> Q;
    Q.push({0,s});
    while(!Q.empty()){
        pair<int,int> top = Q.top(); Q.pop();
        int kc = top.first, u = top.second;
        if(kc > d[u]) continue;
        for(auto it : adj[u]){
            int v = it.first, w = it.second;
            if(d[v] > d[u] +w){
                d[v] = d[u] +w;
                Q.push({d[v],v});
                par[v] = u;
            }
        }
    }
    if(d[t] == 1e9) cout << "0" << endl;
    else{

        cout << d[t] << endl;
        vector<int> path;
        while(1){
            path.push_back(t);
            if(t == s) break;
            t = par[t];
        }
        reverse(path.begin(), path.end());
        for(auto x : path) cout << x << " ";
    }

}
main(){
    // freopen("DN.INP", "r", stdin);
    // freopen("DN.OUT", "w", stdout);
    ktao(); dijkstra(s,t);
}