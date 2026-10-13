#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int a[1001], n;
int used[1001] = {0};
bool check(){
    for(int i = 1; i < n; i++){
        if(abs(a[i+1] - a[i]) == 1 ) return false;
    }
    return true;
}
void in(){
    if(check()){
        for(int i = 1; i <= n; i++){
         cout << a[i];
    }
    cout << endl;
    }
    
}
void Try(int i){
    for(int j= 1; j <= n; j++){
        if(used[j] == 0){
            a[i] = j;
            used[j] = 1;
            if(i == n) in();
            else Try(i+1);
            used[j] = 0;
        }
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        cin >> n;
        Try(1);
    }
}
//Tran Trong Nghia
