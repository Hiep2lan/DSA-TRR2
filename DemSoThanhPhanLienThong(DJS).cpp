#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m;
int sized[1001];
int parent[1001];
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
void Union(int u, int v){
    u = find(u); v = find(v);
    if(u == v) return;
    if(sized[u] < sized[v]) swap(u,v);
    sized[u] += sized[v];
    parent[v] = u;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        cin >> n >> m;
        makeset();
        
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            Union(x,y);
        }
        for(int i = 1; i<= n; i++){
            find(i);
        }
        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(parent[i] == i) ans++;
        }
        cout << ans << endl;
    }
}
//Tran Trong Nghia
