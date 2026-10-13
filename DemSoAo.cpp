#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m;
int dx[10] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[10] = {-1, 0, 1, -1, 1, -1, 0, 1};
char a[105][105];
bool visited[105][105];
void ktao(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    // memset(visited, false, sizeof(visited));
}
void dfs(int i, int j){
    visited[i][j] = true;
    for(int k = 0; k < 8; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && !visited[i1][j1] && a[i1][j1] == 'W'){
            dfs(i1,j1);
        }
    }
    
}
void bfs(int i, int j){
    queue<pair<int,int>> q;
    q.push({i,j});
    visited[i][j] = true;
    while(!q.empty()){
        pair<int, int> v = q.front(); q.pop();
        for(int k = 0; k < 8; k++){
            int i1 = v.first + dx[k];
            int j1 = v.second + dy[k];
            if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && !visited[i1][j1] && a[i1][j1] == 'W'){
                q.push({i1,j1});
                visited[i1][j1] = true;
            }
        }
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ktao();
    int c = 0;
    for(int i = 1; i <= n; i++){
        for(int j =1; j <= m; j++){
            if(!visited[i][j] && a[i][j] == 'W'){
                bfs(i, j); c++;
            }
        }
    }
    cout << c;
    
}
//Tran Trong Nghia
