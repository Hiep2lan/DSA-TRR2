#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m, parent[1001], sized[1001];
struct canh{
    int u, v, w;
    
};
bool cmp(canh a, canh b){
    return a.w < b.w;
}
void makeset(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        sized[i] = 1;
    }
}
int Find(int u){
    if( u  == parent[u]) return u;
    return parent[u] = Find(parent[u]);
}
bool Union(int u, int v){
    u = Find(u); v = Find(v);
    if(u == v) return false;
    else if(sized[u] < sized[v]) swap(u, v);
    sized[u] += sized[v];
    parent[v] = u;
    return true;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        cin >> n >> m;
        vector<canh> vt(m);
        for(int i = 0 ; i < m; i++){
            cin >> vt[i].u >> vt[i].v >> vt[i].w;
        }
        sort(vt.begin(), vt.end(), cmp);
        makeset();
        vector<canh> mst;
        int ans = 0;
        for(auto x : vt){
            if(mst.size() == n-1) break;
            if(Union(x.u, x.v)){
                mst.push_back(x);
                ans += x.w;
            }
        }
        cout << ans << endl;
    }
}
//Tran Trong Nghia
