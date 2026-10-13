#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n, m;
int a[1001][1001] = {0};
bool visited[1001][1001];
void ktao(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    memset(visited, false, sizeof(visited));
}
void dfs(int i, int j){
   // pair<int, int> p;
    visited[i][j] = true;
    for(int k = 0; k <8; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && !visited[i1][j1] && a[i1][j1] == 1){
            dfs(i1, j1);
        }
    }
}

void bfs(int i, int j){
    queue<pair<int,int>> q;
    q.push({i, j});
    visited[i][j] = true;
    while(!q.empty()){
        pair<int,int> top = q.front(); q.pop();
        for(int k = 0; k < 8; k++){
            int i1 = top.first + dx[k];
            int j1 = top.second + dy[k];
            if(i1 >= 1 && i1 <= n && j1 <= n && j1 >= 1 && a[i1][j1] == 1 && !visited[i1][j1]){
                q.push({i1, j1});
                visited[i1][j1] = true;
              
            }


        }
    }
    
}
void lienthong(){
    int c = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(!visited[i][j] && a[i][j] == 1){
                c++; dfs(i, j);
            }
                
                
        }

    }
    cout << c << endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        ktao();
        lienthong();
    }
}
//Tran Trong Nghia
