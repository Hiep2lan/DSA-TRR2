#include <bits/stdc++.h>
#define endl "\n"
 #define int long long
using namespace std;
typedef long long ll;
int const MOD = 123456789;
ll binpow(ll n, ll k){
    if(k == 0) return 1;
    ll X = binpow(n, k/2);
    if(k % 2 == 0) return X * X % MOD;
    if(k % 2 != 0) return X * X % MOD * n % MOD;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        ll res = binpow(2,n-1);
        cout << res << endl;
    }
}
//Tran Trong Nghia
    