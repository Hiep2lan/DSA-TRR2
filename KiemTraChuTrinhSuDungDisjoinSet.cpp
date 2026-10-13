#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m;
int sized[100001];
int parent[100001];
void makeset(){
    for(int i = 0; i < n; i++){
        parent[i] = i;
        sized[i] = 1;
    }
}
int find(int u){
    if(u == parent[u]) return u;
    return parent[u] = find(parent[u]);
}
bool Union(int u,int v){
    u = find(u); v = find(v);
    if(u == v) return false;
    if(sized[u] < sized[v]) swap(u,v);
    parent[v] = u;
    sized[u] += sized[v]; return true;

}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t ; cin >> t; while(t--){
        cin >> n >> m;
        makeset();
        int ok = 1;
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            if(!Union(x,y)) ok = 0;
        }
        if(ok) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
//Tran Trong Nghia
