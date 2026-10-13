#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >>t ;while(t--){
        int n; cin >> n;
        int a[n];
        int ok = 1;
        map<int, int> mp;
        for(auto &x: a){
            cin >> x;
            mp[x]++;
        }
        int min_index = 1e9;
        for(int i = 0; i <= n; i++){
            if(mp[a[i]] > 1 && i < min_index){
                min_index = i;
                ok = 0;
            }
        }
       if(ok) cout << "NO" << endl;
       else cout << a[min_index] << endl;

    }
}
//Tran Trong Nghia
