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
        for(auto &x:a) cin >> x;
        sort(a, a+n);
        int min_dis = 1e9;
        for(int i = 0; i < n-1; i++){
            if(a[i+1] - a[i] < min_dis) min_dis = a[i+1] - a[i];
        }
        cout << min_dis << endl;
    }
}
//Tran Trong Nghia
