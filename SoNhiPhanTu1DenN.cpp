#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        int n; cin >> n;
        queue<string> q;
        q.push("1");
        while(n--){
            string top = q.front();
            q.pop();
            cout << top << " ";
            q.push(top + "0");
            q.push(top + "1");
        }
        cout << endl;
    }
}
//Tran Trong Nghia
