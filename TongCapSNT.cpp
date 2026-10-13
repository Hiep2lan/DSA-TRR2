#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int p[1000005];
void Sang(){
    for(int i = 0; i <= 1000000; i++){
        p[i] =1;
    }
    p[0] = 0, p[1] = 0;
    for(int i = 2; i <= sqrt(1000000); i++){
        if(p[i]){
            for(int j = i*i; j <= 1000000; j+= i){
                p[j] = 0;
            }
        }
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    Sang();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int ok = 1;
        for(int i = 2; i <= n; i++){
            if(p[i] && p[n-i]){
                cout << i << " " << n-i << endl;
                ok = 0;
                break;
            }
            
        }
        if(ok) cout << "-1" << endl;
    }
    
}
//Tran Trong Nghia
