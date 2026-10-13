#include <bits/stdc++.h>
#define endl "\n"
 #define int long long
using namespace std;
typedef long long ll;
int const MOD =1e9+7;
int n,k;
ll binpow(int n, ll k){
    if(k == 0) return 1;
    ll K = binpow(n, k/2);
    if(k % 2 == 0) return K*K % MOD;
    else return K * K % MOD * n % MOD;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        ll res = binpow(n,k) ;
        cout << res <<endl;
    }
}
//Tran Trong Nghia
