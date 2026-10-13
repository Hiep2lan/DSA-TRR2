#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;



signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        int n; cin >> n;
        int a[n+1][n+1] ={0};
       // for(auto &x: a) cin >>x;

        for(int i = 1; i <= n; i++){
            cin >> a[1][i];
        }
        for(int i = 2; i <= n; i++){
            for(int j = 1; j <= n; j++){
                a[i][j] = a[i-1][j] + a[i-1][j+1];
            }
        }
        for(int i = 1; i <= n; i++){
            cout << '[';
            for(int j = 1; j <= n; j++){
                if(j < n-i+1) cout << a[i][j] << " ";
                if( j == n-i+1) cout << a[i][j];
            }
            cout << ']';
            cout << endl;
        }

    }
}
//Tran Trong Nghia
