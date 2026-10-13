#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m;
int parent[100005], sized[100005];
void makeset(){
    for(int i = 1; i <= n; i++){
        sized[i] = 1;
        parent[i] = i;
    }
}
int find(int u){
    if(u == parent[u]) return u;
    return parent[u] = find(parent[u]);
}
void Union (int u, int v){
    u = find(u);
    v = find(v);
    if(u ==v) return;
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
        vector<pair<int,int>> v;
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            v.push_back({x, y});
            Union(x,y);
            
        }
        map<int,int> edcnt;
        for(auto &e : v){ // e se copy ca pair nhung &e k copy nen voi m = 10000 se chay nhanh hon 
            int root = find(e.first); // tim dai dien cua 1 cap canh
            edcnt[root]++; //tang so canh noi voi dai dien cua e.first len 1
            //dem so canh thuoc ve 1 dai dien;
            // xet 1 dinh cua 1 canh co dai dien khac no thi canh do se duoc noi voi dai dien ma find() tim dc;
        }
        int ok = 1;
        for(int i = 1; i <= n; i++){
            if(parent[i] == i){
                int k = sized[i]; // so dinh
                int e = edcnt[i]; // so canh thuoc dinh i
                if(e != k * (k-1)/2){
                    ok = 0; break;
                }
            }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";

    }
}
//Tran Trong Nghia
