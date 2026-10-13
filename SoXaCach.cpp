#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, m, cnt;
int a[1001][1001];
void ktao(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
}
int Try(int i, int j){
    cnt = 0;
    if(i ==n && j == m) return ++cnt;
    if(i < n && j == m) return Try(i+1, j);
    return Try(i, j+1);
       
   
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        ktao();
        cout << Try(1,1) << endl;
    }
}
//Tran Trong Nghia

