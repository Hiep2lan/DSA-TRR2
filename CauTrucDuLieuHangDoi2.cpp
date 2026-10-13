#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int q; cin >> q;
    queue<int> Q;
    while(q--){
        string s; cin >> s;
        if(s == "PUSH"){
            int x; cin >> x;
            Q.push(x);
        }
        else if(s == "POP" && !Q.empty()) Q.pop();
        else if(s == "PRINTFRONT"){
            if(!Q.empty()) cout << Q.front() << endl;
            else cout << "NONE" << endl;
        }
    }
}
//Tran Trong Nghia
