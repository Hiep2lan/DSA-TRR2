#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int Find(int a[], int k, int l, int r){
    int m = l+(r-l)/2;
    if(l > r) return -1;
    if(a[m] == k) return m;
    if(a[m] < k) return Find(a, k, m+1, r);
    else return Find(a, k, l, m-1);

}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n+1];
       for(int i = 1; i <= n; i++) cin >> a[i];
       if(Find(a, k, 0, n-1) == -1) cout << "NO" <<endl;
       else cout << Find(a, k, 0, n-1) <<endl;
    }
}
//Tran Trong Nghia
