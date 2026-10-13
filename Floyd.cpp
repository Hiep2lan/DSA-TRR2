#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m, a[101][101];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n  >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) a[i][j] = 0;
            else a[i][j] = 1e9;
        }
    }

    for(int i = 1; i <= m; i++){
        int u, v, c;
        cin >> u >> v >> c;
        a[u][v] = min(a[u][v], c);
        a[v][u] = min(a[v][u], c);
    }
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(a[i][k] <= 1e9 && a[k][j] <= 1e9){
                    a[i][j]  = min(a[i][j], a[i][k] + a[k][j]);
                }
            }
        }
    }
    int q; cin >> q;
    while(q--){
        int x, y; cin >> x >> y;
        cout << a[x][y] << endl;
    }
}
//Tran Trong Nghia
