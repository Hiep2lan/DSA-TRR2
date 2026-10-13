#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n,p,s, ans = 0, a[1005];
int used[1005]={0};
int nt(int u){
    if(u < 2) return 0;
    for(int i =2; i <= sqrt(n); i++){
        if(u % i == 0) return 0;
    }
    return 1;
}
bool check(){
    int t = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] <= p || !nt(a[i])) return false;
        t += a[i];
    }
    if(t != s) return false;
    return true;
}
void in(){
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
}
void Try(int i){
    for(int j = 1; j <= n; j++){
       a[i] =j;
       if(i == n) in();
 
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        cin >> n>>p >> s;
        Try(1);
    }
}
//Tran Trong Nghia
