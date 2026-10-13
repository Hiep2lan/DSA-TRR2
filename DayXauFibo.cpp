#include <bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;
typedef long long ll;

int F[100];
char Find(int n,  ll k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= F[n-2]){ 
        return Find(n-2, k);
    }
    else{
        return Find(n-1, k-F[n-2]);
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
    F[1] = 1;
    F[2] = 1;
    for(int i =2; i <= 92; i++){
        F[i] = F[i-2] +F[i-1];
    }
        int n, k; cin >> n >> k;
        cout << Find(n, k) << endl;
    }

}
//Tran Trong Nghia
