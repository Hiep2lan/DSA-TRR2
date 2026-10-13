#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

int n; 

map<int, int> mp;

bool cmp(int x, int y){
    if(mp[x] != mp[y]) return mp[x] > mp[y];
    else  return x < y;
}
  
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        for(auto &x : a){
            cin >> x;
              mp[x]++;
        }
        sort(a, a+n, cmp);
        for(auto x: a) cout << x <<  " ";
        mp.clear();
        cout << endl;
    }
}
//Tran Trong Nghia
