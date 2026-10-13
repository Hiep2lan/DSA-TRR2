#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m;
int parent[100005];
int sized[100005];
void makeset(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        sized[i] = 1;
    }
}
int find(int u){
    if(u == parent[u]) return u;
    return parent[u] = find(parent[u]);
}
bool Union(int u, int v){
    u = find(u); v = find(v);
    if(u == v) return false;
    if(sized[u] < sized[v]) swap(u,v);
    sized[u] += sized[v];
    parent[v] = u;
    return true;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        cin >> n >> m;
        makeset();
        int ok = 1;
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            if(!Union(x,y)){
                ok = 0;
            }
        }
        if(ok == 1) cout << "NO\n";
        else cout << "YES\n";
    }
}
//Tran Trong Nghia
