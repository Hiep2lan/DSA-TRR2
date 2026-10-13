#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n,m,z;
int parent[100001];
int sized[100001];
void makeset(){
    for(int i = 1; i <= 100001; i++){
        sized[i] = 1;
        parent[i] = i;
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
    parent[v] = u;
    sized[u] += sized[v];
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    makeset();
    int q; cin >> q; while(q--){
        cin >> n >> m >> z;
        if(z == 1){
            Union(n, m);
        }
        if(z == 2){
            if(find(n) == find(m)) cout << "1" << endl;
            else cout << "0" << endl;
        }
    }
}
//Tran Trong Nghia
