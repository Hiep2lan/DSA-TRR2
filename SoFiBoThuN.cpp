#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int const MOD = 1e9+7;
struct matran{
    ll a[2][2];
    friend matran operator * (matran x, matran y){
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

matran binpow(matran a, ll n){
    if(n == 1) return a;
    matran X = binpow(a, n/2);
    if(n % 2 == 0) return X* X;
    else return X* X *a;
}

main(){
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        matran x;
        x.a[0][0] = 1;
        x.a[0][1] = 1;
        x.a[1][0] = 1;
        x.a[1][1] = 0;
        matran res = binpow(x, n);
        cout << res.a[1][0] << endl;
    }
}

//Tran Trong Nghia
