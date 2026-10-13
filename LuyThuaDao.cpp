#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int const MOD = 1e9+7;

ll binpow(ll n, ll k){
    if(k == 0) return 1;
    ll X = binpow(n, k/2) % MOD;
   // X %= MOD;
    if(k % 2 == 0) return X * X % MOD;
    else return X * X % MOD* n % MOD;
}
//ll modString(string s, ll n)
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        string rev = s;
        reverse(rev.begin(),rev.end());
        
       // cout << n << " " << k << endl;
        cout <<  binpow(stoll(s),stoll(rev)) << endl;
       //cout << res <<endl;
    }
}
//Tran Trong Nghia
