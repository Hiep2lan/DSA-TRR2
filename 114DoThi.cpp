#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int t, n, deg1[1001], deg2[1001];
int a[1001][1001] , b[1001][1001] = {0};
vector<pair<int,int>> v;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DT.INP", "r",  stdin);
    freopen("DT.OUT", "w", stdout);
    cin >> t >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1){
                deg1[j]++; deg2[i]++;
                v.push_back({i,j});
            }
        }
    }
    for(int i = 0; i < v.size(); i++){
        int u = v[i].first;
        int k = v[i].second;
        b[u][i] = 1;
        b[k][i] = -1;
    }
    if(t == 1){
        for(int i = 1; i <= n; i++){
            cout << deg1[i] << " " << deg2[i] << endl;
        }
    }
    else{
        cout << n << " " << v.size() << endl;
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < v.size(); j++){
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }

}
//Tran Trong Nghia
