#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n+1][n+1] = {0};
        for(int i = 1; i <= n; i++){
            cin >> a[n][i];
        }
        for(int i = n-1; i >= 1; i--){
            for(int j = n-1; j >= 1; j--){
                a[i][j] = a[i+1][j] + a[i+1][j+1];
            }
        }
        for(int i = 1; i <= n ; i++){
            cout << '[';
            for(int j = 1; j <= n; j++){
               if(i>j) cout << a[i][j] << " ";
               if(i == j) cout << a[i][j];
            }
            cout << "] ";
        }
        cout << endl;
    }
}
//Tran Trong Nghia
