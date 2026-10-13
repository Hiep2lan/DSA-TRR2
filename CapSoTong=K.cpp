#include <bits/stdc++.h>
#define endl "\n"
 #define int long long
using namespace std;
typedef long long ll;
 map<int, int> mp;
int cnt;
void solve(int a[], int n, int k){
   
    for(int i = 0; i < n; i++){
        int x = k - a[i];
        if(mp.count(x)){
            cnt += mp[x];
        }
        mp[a[i]]++;

    }
    cout << cnt << endl;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        cnt = 0;
        int n, k; cin >> n >> k;
        int a[n];
        for(auto &x : a) cin >> x;
        solve(a, n, k);
        mp.clear();
    }
}
//Tran Trong Nghia
