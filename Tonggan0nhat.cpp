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
        int n ; cin >> n ;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        int l = 0, r= n-1;
        int min_val = 1e9;
        while(l < r){
            int s = a[l]+ a[r];
            if(abs(s) < abs(min_val)) min_val = s;
            else if( s < 0) l++;
            else r--;
        }
        cout << min_val << endl;
    }
}
//Tran Trong Nghia
