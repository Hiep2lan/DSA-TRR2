#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, ok = 1; cin >> n;
        for(int b = n/7; b >= 0; b--){
            int remain = n-b*7;
            if(remain % 4 == 0){
                int a = remain / 4;
                cout << string(a,'4');
                cout << string(b,'7') << endl;
                ok = 0;
                break;
            }
        }
        if(ok) cout << "-1" << endl;   

    }
}
//Tran Trong Nghia
