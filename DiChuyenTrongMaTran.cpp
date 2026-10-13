#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
bool visited[1001][1001];
int m,n;
vector<int> adj[1001][1001];
int dis[1001][1001];
int a[1001][1001];
void ktao(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            cin >> a[i][j];
        }
    }
    memset(visited, false, sizeof(visited));
   // memset(dis, 0, sizeof(dis));
}
void bfs(int i, int j){
    queue<pair<int,int>> q;
    q.push({i,j});
    visited[i][j] = true;
    dis[i][j] = 0;
    while(!q.empty()){
        pair<int,int> top = q.front(); q.pop();
        // if(top.first == n-1 && top.second == m-1){
        //     cout << dis[top.first][top.second] << endl; return;
        // }
            int tmp = a[top.first][top.second];
            int i1 = top.first + tmp;
            int j1 = top.second + tmp;
            if( i1 < n &&!visited[i1][top.second] ){
                dis[i1][top.second] = dis[top.first][top.second] +1;
                q.push({i1,top.second});
                visited[i1][top.second] = true;
            }
            if(j1 < m && !visited[top.first][j1] ){
                dis[top.first][j1] = dis[top.first][top.second] +1;
                q.push({top.first,j1});
                visited[top.first][j1] =true;
            }
        }
    
    if(!visited[n-1][m-1]) cout << "-1" << endl;
    else cout << dis[n-1][m-1] << endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        ktao(); bfs(0,0);

    }
}
//Tran Trong Nghia
