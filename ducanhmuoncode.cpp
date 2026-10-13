#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int t, n , m, deg1[105], deg2[105];
vector<pair<int,int>> v;
int a[105][105] = {0};
struct edge{
    int u, v, w;
};
vector<vector<int>> res(105);
vector<pair<int, int>> ve;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // freopen("DT.INP", "r", stdin);
    // freopen("DT.OUT", "w", stdout);
    cin >> t >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j]==1){
                deg1[i]++;
                deg2[j]++;
                ve.push_back({i, j});
            }
        }
    }
    m=ve.size();
    if(t==1){
        for(int i=1; i<=n; i++){
            cout << deg2[i] << " " <<deg1[i] << "\n";
        }
    }
    else{
        cout << n <<" "<< m << "\n";
        for(int i=1; i<=n; i++){
            for(int j=0; j<m; j++){
                if(i==ve[j].first) cout << "1 ";
                else if(i==ve[j].second) cout << "-1 ";
                else cout << "0 ";
            }
            cout << "\n";
        }
    }
}
