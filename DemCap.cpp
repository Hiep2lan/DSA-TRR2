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
        int n, k; cin >> n >> k;
        int a[n]; 
        for(auto &x : a) cin >> x;
        sort(a, a+n);
        int c = 0, r = 0;
        for(int l = 0; l < n; l++){
            while(r < n && a[r]- a[l] < k){
                r++; 
            }
            c += r-l-1;
        }
        cout << c<< endl;
        
    }
}
//Tran Trong Nghia
