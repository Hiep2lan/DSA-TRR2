#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        queue<int> q;
        int n; cin >>n;
        while(n--){
            int x; cin >> x;
            if(x == 1) cout << q.size() << endl;
            else if( x == 2){
                if(!q.empty()) cout << "NO" << endl;
                else cout << "YES" << endl;
            }
            else if( x == 3){
                int y; cin >> y; q.push(y);
            }
            else if( x == 4 && !q.empty()) q.pop();
            else if(x == 5){
                if(!q.empty()) cout << q.front() << endl;
                else cout << "-1" << endl;
            }
            else if( x == 6){
                if(!q.empty()) cout << q.back() << endl;
                else cout << "-1" << endl;
            }

        }
    }
}
//Tran Trong Nghia
