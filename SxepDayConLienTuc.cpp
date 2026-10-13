#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

void solve(int a[], int n, vector<int> v){
    int l = 1, r = n;
    for(int i = 1; i <= n; i++){
        if(a[i] != v[i-1]){
            cout << i <<  " ";
            break;
        }
    }
    for(int i = n; i >= 1; i--){
        if(a[i] != v[i-1]){
            cout << i << endl;
            break;
        }
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >>t;
    while(t--){
       
        int n; cin >>n;
        int a[n+1]; 
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        vector<int> v(a+1, a+n+1);
        sort(a+1, a+n+1);
        solve(a, n, v);
    }
}
//Tran Trong Nghia
