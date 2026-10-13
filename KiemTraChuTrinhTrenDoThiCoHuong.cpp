#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n,m;
int degin[1001];
vector<int> adj[1001];
void inp(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    memset(degin, 0, sizeof(degin));
    for(int i = 1; i<= m; i++){
        int x, y; cin >>x >> y;
        adj[x].push_back(y);
        degin[y]++;
    }
}
bool Kahn(){
    queue<int> q;
    for(int i = 1; i <= n; i++){
        if(degin[i] == 0) q.push(i);
    }
    int cnt = 0;
    while(!q.empty()){
        int v = q.front(); q.pop();
        cnt++;
        for(auto x : adj[v]){
            degin[x]--;
            if(degin[x] == 0) q.push(x);
        }
    }
    if(cnt == n) return false;
    return true;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        inp();
        if(Kahn()) cout << "YES\n";
        else cout << "NO\n";
    }
}
//Tran Trong Nghia
