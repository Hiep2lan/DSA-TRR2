#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n+1,vector<int> (m+1));
    for(int h = 1; h <= n; h++){
        for(int c = 1; c <= m; c++){
            cin >> a[h][c];
        }
    }
    vector<vector<int>> sb(n+1, vector<int> (m+1, -1));
    queue<pair<int,int>> q;
    q.push({1,1});
    sb[1][1] =0;
    while(!q.empty()){
        auto [h, c] = q.front();
        q.pop();
        if(h == n && c == n){
            cout << sb[h][c] << endl;
            return;
        }
        if(h+1 <= n){
            int bx = abs(a[h][c] - a[h+1][c]);
            if(bx > 0 && h + bx <= n && sb[h +bx][c] == -1){
                sb[h+bx][c] = sb[h][c] +1;
                q.push({h+bx, c});
            }
        }
        if(c+1 <= m){
            int bp = abs(a[h][c] - a[h][c+1]);
            if(bp >= 0 && c+bp <= m && sb[h][c+bp] == -1){
                sb[h][c+bp] = sb[h][c]+1;
                q.push({h, bp+c});
            }
        }
        if(h+1 <= n && c+1 <= m){
            int bc = abs(a[h][c] - a[h+1][c+1]);
            if(bc > 0 && h + bc <= n && c + bc <= m && sb[h+bc][c+bc] == -1){
                sb[h+bc][c+bc] = sb[h][c] +1;
                q.push({h+bc, c+bc});
            }
        }
    }
    cout << "-1\n";
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
}
//Tran Trong Nghia
