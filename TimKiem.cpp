#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

int check(int n, int a[], int X){
    for(int i = 0; i < n; i++){
        if(a[i] == X) return 1;
    }
    return -1;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;cin >> t; while(t--){
        int n, X;
        cin >> n >> X;
        int a[n];
        for(auto &x : a) cin >>x;
        cout << check(n, a, X) << endl;
    }
}
//Tran Trong Nghia
