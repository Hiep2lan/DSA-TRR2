#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, k;
int search(int a[], int l, int r){
    int m = (l+r) /2;
    if(l > r) return -1;
    if(a[m] <= k) return k;
    else if(a[m] > k) return search(a, l, m-1 );
    else return search(a, m+1, r);
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        cin >> n >> k;
        int a[n];
        for(auto &x : a) cin >> x;
        
        int l = 0, r= n-1;
        cout << search(a, l, r) << endl;
    }
}
//Tran Trong Nghia
