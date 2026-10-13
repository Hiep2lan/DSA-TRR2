#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int t, n, m, deg1[1001], deg2[1001];
int a[1001][1001] = {0};
vector<pair<int,int>> vt;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    cin >> t >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        deg1[v]++; deg2[u]++;
        vt.push_back({u,v});
    }
    for(int i = 0; i < vt.size(); i++){
        int U = vt[i].first;
        int V = vt[i].second;
        a[U][i+1] = 1;
        a[V][i+1] = -1;
    }
    if(t == 1){
        for(int i = 1; i <= n; i++){
            cout << deg1[i] <<  " " << deg2[i] << endl;
        }
    }
    else{
        cout << n << " " << m << endl;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

}
//Tran Trong Nghia
