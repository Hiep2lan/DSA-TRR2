#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
void solve(int n){
    queue<string> q;
    q.push("9");
    while(true){
        string top = q.front();
        q.pop();
        q.push(top+"0");
        q.push(top + "9");
        if(stoll(top) % n == 0){
            cout << top << endl;
            return;
        }
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        int n; cin >> n;
        solve(n);
    }
}
//Tran Trong Nghia
