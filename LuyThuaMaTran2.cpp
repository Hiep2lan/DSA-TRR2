#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, k;
int const MOD = 1e9+7;
struct matran{
    ll a[10][10];
    friend matran operator *(matran x, matran y){
        matran res;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                res.a[i][j] = 0;
                for(int k = 0; k < n; k++){
                    res.a[i][j] += x.a[i][k] * y.a[k][j];
                    res.a[i][j] %= MOD;
                }
            }
        }
        return res;
    }

};
matran binpow(matran x, ll k){
    if(k == 1) return x;
    matran X = binpow(x, k/2);
    if(k % 2 == 0) return X * X;
    else return X*X*x;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        cin >> n >> k;
        matran x;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> x.a[i][j];
            }
        }
        matran res = binpow(x, k);
        ll ans = 0;
        for(int i = 0; i < n; i++){
                ans += res.a[i][n-1];
                ans %= MOD;
        }
        
        cout << ans <<  endl;
    }
}
//Tran Trong Nghia
