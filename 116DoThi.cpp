#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int t, n, m, deg1[105], deg2[105];
vector<int> adj[105];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    cin >> t >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        deg1[y]++; deg2[x]++;
    }
    if(t == 1){
        for(int i = 1; i <= n; i++){
            cout << deg1[i] << " " << deg2[i] <<endl;
        }
    }
    else{
        cout << n << endl;
        for(int i = 1; i <= n; i++){
            cout << adj[i].size() << " ";
            for(auto x : adj[i]){
                cout << x << " ";
            }
            cout << endl;
        }
    }

}
//Tran Trong Nghia
