#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n,cnt = 0;
int a[1005], cheoc[1005], cheop[1005], used[1005];
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!used[j] && !cheoc[i-j +n] && !cheop[i+j-1]){
            used[j] = 1;
            a[i] = j;
            cheoc[i-j +n] = 1;
            cheop[i+j-1] =1;
            if(i == n) cnt++;
            else Try(i+1);
            cheop[i+j-1] =0;
            used[j] = 0;
            cheoc[i-j +n] = 0;
        }
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        cin >> n;
        memset(cheoc, 0, sizeof(cheoc));
        memset(cheop, 0, sizeof(cheop));
        memset(used, 0, sizeof(used));
        Try(1);
        cout << cnt << endl;
        cnt = 0;
    }
}
//Tran Trong Nghia
