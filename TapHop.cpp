#include<bits/stdc++.h>
using namespace std;
int m, n, cnt = 0;
int a[1005][1005];
int solve(int i, int j){
    if(i == m && j == n){++cnt;}
    if( i +1 <= m) solve(i+1, j);
    if(j +1 <= n)  solve(i, j+1);
    return cnt;
}
main(){
    int t; cin >> t; while(t--){
        cin >> m >> n;
        for(int i =1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        cout << solve(1,1) << endl; 
        // cout << cnt << endl;
         cnt = 0;
    }
}