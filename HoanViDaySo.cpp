#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(auto &x : a) cin >> x;
    sort(a, a+n);
    do{
        for(auto x : a) cout << x << " ";
        cout <<endl;
    }
    while( next_permutation(a, a+n));
       
    

}
//Tran Trong Nghia
