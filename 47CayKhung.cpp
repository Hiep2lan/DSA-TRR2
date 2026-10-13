#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
int n, m;
int parent[1001], sz[1001];
struct canh{
    int u, v, w;
};
vector<canh> edge;
void inp(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y, z; cin >> x >> y >> z;
        edge.push_back({x, y, z});
    }
}
void makeset(){
    for(int i = 1; i <= n; i++){
        sz[i] = 1;
        parent[i] = i;
    }
}
int find(int u){
    if( u == parent[u]) return u;
    return parent[u] = find(parent[u]);
}
bool Union(int u, int v){
    u = find(u); v = find(v);
    if(u == v) return false;
    if(sz[u] < sz[v]) swap(u, v);
    sz[u] += sz[v];
    parent[v] = u;
    return true;
}
bool cmp (canh a, canh b){
   if(a.w != b.w) return a.w < b.w;
   if(a.u != b.u) return a.u < b.u;
   return a.v < b.v;
}
void kruskal(){
    vector<canh> mst; int d = 0;
    sort(edge.begin(), edge.end(), cmp);
    for(int i = 0; i < m; i++){
        if(mst.size() == n-1) break;
        canh e = edge[i];
        if(Union(e.u, e.v)){
            mst.push_back(e);
            d += e.w;
        }
    }
    if(mst.size()!= n-1) cout << "0" << endl;
    else{
        cout << d << endl;
        for(auto x : mst){
            cout << x.u << " " << x.v << " " << x.w << endl;
        }
    }

}
main(){
    cin.tie(0); cout.tie(0);
    ios:: sync_with_stdio(false);
    freopen("CK.INP", "r", stdin);
    freopen("CK.OUT", "w", stdout);
    inp();
    makeset();
    kruskal();
}