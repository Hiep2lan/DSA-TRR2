#include <bits/stdc++.h>
#define endl "\n"
 #define int long long
using namespace std;
typedef long long ll;
int const MOD = 1e9+7;
int n;
struct matran{
    ll a[2][2];
    friend matran operator *(matran x, matran y){
        matran res;
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                res.a[i][j] = 0;
                for(int k = 0; k < 2; k++){
                    res.a[i][j] += x.a[i][k] * y.a[k][j];
                    res.a[i][j] %= MOD;
                }
            }
            
        }
        return res;
    }

};
matran binpow(matran x, ll n){
    if(n == 1) return x;
    matran X = binpow(x, n/2);
    if(n % 2 == 0) return X *X;
    else return X*X*x;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t; while(t--){
        cin >> n;
        matran x;
        x.a[0][0] = 1;
        x.a[0][1] = 1;
        x.a[1][0] = 1;
        x.a[1][1] = 0;
        matran res = binpow(x, n);
        cout << res.a[0][1] <<endl;

    }
}
//Tran Trong Nghia
