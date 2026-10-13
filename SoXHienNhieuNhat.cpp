#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >>t; while(t--){
        int n; cin >> n;
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            mp[x]++;
        }
        int res = 0, max_fre = 0;
        for(auto x : mp){
            if(x.second > max_fre){
                 max_fre = x.second;
                 res = x.first;
            }
        }
        if(max_fre <= n/2) cout << "NO" << endl;
        else cout << res <<endl;
    }

}
//Tran Trong Nghia
