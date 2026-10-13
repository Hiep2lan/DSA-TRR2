#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, k, a[20];
void in(){
    for(int i = 1; i <= k; i++){
            cout << char(a[i] + 64);
        
    }cout << "\n";
}

void Try(int i){
    for(int j = a[i-1]+1; j <= n-k+i; j++){
        a[i] = j;
        if(i== k){
            in();
        }
        else Try(i+1);
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        cin >> n >> k;
        Try(1);
    }
}
//Tran Trong Nghia
