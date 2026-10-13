#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int BiSearch(vector<int> a, int l,int r,int k){
    if(l > r) return -1;
    int m = l+(r-l)/2;
    if(m == k) return a[m];
    if(m < k ) return BiSearch(a, m+1, r, k);
    else return BiSearch(a, l, m-1, k);
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        int m, n, k; cin >> m >> n >> k;
        int a[m], b[n];
        vector<int> v;
        for(auto &x : a){
            cin >> x;
            v.push_back(x);
        }
        for(auto &x : b){
            cin >>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        cout << BiSearch(v,0,n-1,k);
        

    }
}
//Tran Trong Nghia
