#include <bits/stdc++.h>
using namespace std;
int t, n, m, deg1[1001], deg2[1001];
vector<pair<int,int>> vt;
int a[1001][1001];
void ktao(){
     for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j) a[i][j] = 0;  else a[i][j] = 10000;
        }
    }
}
signed main(){
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    cin >> t >> n >> m;
    ktao();
    for(int i = 1; i <= m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        vt.push_back({u,v});
        a[u][v] = w;
    }
    for(auto x : vt){
        deg1[x.second]++; deg2[x.first]++;
    }
    if(t == 1){
        for(int i = 1; i <= n; i++){
            cout << deg1[i] << " " << deg2[i] << endl;
        }
    }
    else{
        cout << n << endl;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cout << a[i][j] <<  " ";
            }
            cout << endl;
        }
    }
}

