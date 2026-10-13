#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n;
int a[1005][1005];
string ans = "";
int dx[8] = {-1, 0, 0, 1};
int dy[8] = {0, -1, 1, 0};
bool vs[1005][1005];
vector<int> adj[1005];
void bfs(int i, int j){
    queue<pair<int,int>> q;
    q.push({i,j});
    vs[i][j] = true;
    while(!q.empty()){
        auto top = q.front(); q.pop();
        int x = top.first, y = top.second;
        for(int k = 0; k < 4; k++){
            int i1 = x +k;
            int j1 = y +k;
            if(i1 >= 1 && j1 >= 1 && i1 <= n && j1 <= n && !vs[i1][j1]){
                
            }
        }
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }

    }
}
//Tran Trong Nghia
