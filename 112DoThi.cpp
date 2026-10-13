#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int t, n, m ,deg1[105], deg2[105], a[105][105];
vector<pair<int,int>> v;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    cin >> t >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1){
                deg2[i]++; deg1[j]++;
                v.push_back({i, j});
            }
        }
    }
    if(t == 1){
        for(int i = 1; i <= n; i++){
            cout << deg1[i] << " " <<deg2[i] << endl;
        }
       
    }
    else{
        cout << n << " " << v.size() << endl;
        for(auto x : v) cout << x.first << " " << x.second << endl;

    }
}
//Tran Trong Nghia
