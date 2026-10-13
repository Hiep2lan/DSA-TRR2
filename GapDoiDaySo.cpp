#include <bits/stdc++.h>
#define endl "\n"
 #define int long long
using namespace std;
typedef long long ll;
int Find(int n, int k){
   if(k == pow(2, n-1)) return n;
   if(k < pow(2,n-1)) return Find(n-1, k);
   else return Find(n-1, k-pow(2,n-1));
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >>t;
    while(t--){
        int n, k; cin >> n >> k;
       cout << Find(n, k) <<endl;
    }
}
//Tran Trong Nghia
