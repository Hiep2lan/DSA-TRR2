#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m;
int dx[5] = {-1, 0, 0, 1};
int dy[5] = { 0, -1, 1, 0};
char a[1005][1005];
void ktao(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
}
void bfs(int i, int j){
    queue<pair<int,int>> q;
    q.push({i, j});
    a[i][j] = '.';
    while(!q.empty()){
        pair<int, int> top = q.front(); q.pop();
        for(int k = 0; k < 4; k++){
            int i1 = top.first + dx[k];
            int j1 = top.second + dy[k];
            if(a[i1][j1] == '#' && i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m){
                q.push({i1,j1});
                a[i1][j1] = '.';
            }
        }
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ktao();
    int c = 0;
    for(int i= 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == '#'){
                c++; bfs(i, j);
            }
        }
    }
    cout << c << endl;


}
//Tran Trong Nghia
