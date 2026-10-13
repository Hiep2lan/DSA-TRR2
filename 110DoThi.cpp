#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
struct Data{
    int u, v, w;
};
int t, n, deg[1005];
vector<Data> canh;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t >> n;
    int a[n+1][n+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >>a[i][j];
            if(a[i][j] != 10000 && a[i][j] != 0){
                deg[i]++;
              if(i < j)  canh.push_back({i, j, a[i][j]});
            }
        }
    }
    if(t == 1){
        for(int k = 1; k <= n; k++) cout << deg[k] << " ";
    }
    if(t== 2){
        cout << n << " " << canh.size() << endl;
        for(auto e : canh){
            cout << e.u << " " << e.v << " " << e.w << endl;
        }
    }

    
}
//Tran Trong Nghia

