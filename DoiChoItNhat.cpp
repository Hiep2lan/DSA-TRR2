#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        int n; cin >>n;
        int a[n];
        for(auto &x : a) cin >>x ;
        int c =0;
        for(int i = 0; i < n; i++){
            if(a[i] != i){
                for(int j = i+1; j< n; j++){
                    if(a[j] != j && a[i] == j){
                        swap(a[i], a[j]);
                        c++;
                    }
                }
            }
        }
        cout << c << endl;
    }
}
//Tran Trong Nghia
