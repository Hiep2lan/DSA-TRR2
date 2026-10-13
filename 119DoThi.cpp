#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int t, n, deg1[1001], deg2[1001];
vector<pair<int,int>> v;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    cin >> t >> n;
    for(int i = 1; i <= n; i++){
        int k; cin >> k;
        deg2[i] = k;
        for(int j = 1; j <= k; j++){
            int tmp; cin >> tmp;
            deg1[tmp]++;
            v.push_back({i, tmp});
        }
    }
    if(t == 1){
        for(int i = 1; i <= n; i++){
            cout << deg1[i] << " " << deg2[i] << endl;
        }
    }
    else{
        cout << n << " " << v.size() << endl;;
        for(auto x : v){
            cout << x.first << " " << x.second << endl;
        }
    }
}
//Tran Trong Nghia
