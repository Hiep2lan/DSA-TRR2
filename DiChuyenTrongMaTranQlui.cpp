#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m, cnt;
int a[105][105];

void Try(int i, int j){
    if(i ==n && j == m){ ++cnt;}
    if(i +1 <= n ) Try(i+1, j);
    if(j +1 <= m) Try(i, j+1);
}
void ktao(){
    cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        cnt = 0;
        Try(1,1);
        cout << cnt << endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        ktao();
    }
}
//Tran Trong Nghia

