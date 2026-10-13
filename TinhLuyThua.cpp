#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int const MOD = 1e9+7;
ll binpow(int n, ll k){
    if(k == 0) return 1;
    ll x  = binpow(n, k/2);
    if(k % 2 == 0) return x*x % MOD;
    else return x*x % MOD * n % MOD;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll a, b;
    while(true){
        cin >> a >> b;
        if(a == 0 && b == 0) return 0;
        ll res = binpow(a,b);
        cout << res << endl;
    }
}
//Tran Trong Nghia
