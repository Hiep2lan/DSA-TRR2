#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
struct canh{
    int u,v,w;
};
int n, s, d;
vector<pair<int,int>> adj[105];
int a[105][105];
int used[105];

void ktao(){
    cin >> n >> s;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=n; j++){
            if(a[i][j] != 0 && a[i][j] != 10000){
                adj[i].push_back({j,a[i][j]});
                adj[j].push_back({i, a[i][j]});
            }
        }
    }
    memset(used, false, sizeof(used));
}
void prim(int u){
    vector<canh> mst;
     d = 0;
    used[u] = true;
    while(mst.size() < n-1){
        int X = -1,Y = -1;
        int min_w = 1e9;
        for(int i = 1; i <= n; i++){
            if(used[i] == true){
                for(auto x : adj[i]){
                    int j = x.first, trongso = x.second;
                    if(!used[j] && trongso < min_w){
                        min_w = trongso;
                        X = j; Y = i;
                    }
                }
            }
        }
        
        if(X == -1){
            cout << "0" << endl; return;
        }
        mst.push_back({X,Y,min_w});
        used[X] = true;;
        d += min_w;
    }
    cout << d << endl;
    for(auto e : mst){
        cout << min(e.u, e.v) << " " <<max(e.u, e.v) << " " << e.w << endl;
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // freopen("CK.INP", "r", stdin);
    // freopen("CK.OUT", "w", stdout);
    ktao(); prim(s);
}
//Tran Trong Nghia
