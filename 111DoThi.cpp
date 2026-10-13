#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int t, n, m, deg[105], a[105][105];

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    cin >> t >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j) a[i][j] = 0;
            else a[i][j] = 10000;
        }
    }
    for(int i = 1; i<= m; i++){
        int u, v, w; 
        cin >> u >> v >> w;
        deg[u]++; deg[v]++;
        a[u][v] = a[v][u] = w;

    }
    
    if(t == 1){
        for(int k = 1; k <= n; k++) cout << deg[k] << " ";
        cout << endl;
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
//Tran Trong Nghia
