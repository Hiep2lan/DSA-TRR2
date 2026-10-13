#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(auto &x : a) cin >> x;
        sort(a, a+n);
        for(auto x : a) cout << x << " ";
        cout << endl;
    }
}
//Tran Trong Nghia
