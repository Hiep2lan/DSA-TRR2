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
        int n, k; cin >> n >> k;
        int a[n]; map<int, int> mp;
        for(auto &x: a) cin >> x;
        
        for(auto x: a) mp[x]++;
        if(!mp[k]) cout << "-1" << endl;
        else cout << mp[k] << endl;

    }
}
//Tran Trong Nghia
