#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, a[1005], A[1005][1005];
int used[1005], cheoc[1005],cheop[1005];
int Max;
void in(){
    int t = 0;
    for(int i = 1; i <= n; i++){
        t += A[i][a[i]];
    }
    if(t > Max) Max = t;
}
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!used[j] && !cheoc[i-j+n] && !cheop[i+j-1]){
            a[i] = j;
            used[j] = 1;
            cheoc[i-j+n] = 1;
            cheop[i+j-1] = 1;
            if(i==n) in();
            else Try(i+1);
             used[j] = 0;
            cheoc[i-j+n] = 0;
            cheop[i+j-1] = 0;
        }
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        n = 8;
        for(int i = 1; i <=n; i++){
            for(int j = 1; j <= n; j++){
                cin >> A[i][j];
            }
        }
        Max = -1e9;
        memset(used, 0, sizeof(used));
        memset(cheoc, 0, sizeof(cheoc));
        memset(cheop, 0, sizeof(cheop));
        Try(1);
        cout << Max << endl;

    }
}
//Tran Trong Nghia
