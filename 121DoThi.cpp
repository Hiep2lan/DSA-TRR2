#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int t, n, deg1[1001], deg2[1001];
vector<pair<int,int>> v;
int a[1001][1001];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    cin >> t >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] != 0 && a[i][j] != 10000){
                v.push_back({i, j});

            }
        }
    }
    for(auto x : v){
        deg1[x.second]++;
        deg2[x.first]++;
    }
    if(t == 1){
        for(int i = 1; i<= n; i++){
            cout << deg1[i] << " " << deg2[i] << endl;
        }
    }
    else{
        cout << n << " " << v.size() << endl;
        for(int i = 0; i < v.size(); i++){
            cout << v[i].first << " " << v[i].second << " " << a[v[i].first][v[i].second] << endl;
            
        }
    }
}
//Tran Trong Nghia
