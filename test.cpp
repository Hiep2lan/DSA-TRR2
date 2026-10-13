#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n,m;
int par[100005], sz[100005];
void makeset(){
    for(int i = 1; i<=n; i++){
        sz[i] = 1;
        par[i] = i;
    }
}
int find(int u){
    if(u == par[u]) return u;
    return par[u] = find(par[u]);
}
void Union(int u,int v){
    u = find(u); v = find(v);
    if(u == v) return;
    if(sz[u] < sz[v]) swap(u,v);
    sz[u] += sz[v];
    par[v] = u;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;cin>>t;while(t--){
        cin >> n >> m;
        makeset();
        vector<pair<int,int>> v;
        for(int i = 1; i <= m; i++){
            int x,y; cin >> x >> y;
            v.push_back({x,y});
            Union(x,y);
        }
        map<int,int> demcanh;
        for(auto &e : v){
            int root = find(e.first);
            demcanh[root]++;
        }
        int ok = 1;
        for(int i =1; i <= n; i++){
            if(par[i] == i){
                int k = sz[i];
                int e = demcanh[i];
                if(e != k*(k-1)/2){
                    ok = 0; break;
                }
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
//Tran Trong Nghia
