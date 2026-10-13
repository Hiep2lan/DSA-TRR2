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
        queue<string> q; vector<string> v;
        q.push("6"); q.push("8");
        while(true){
            string top = q.front();
            q.pop();
            if(top.size() > n) break;
            v.push_back(top);
            q.push(top+"6");
            q.push(top+"8");
        }
        cout << v.size() << endl;
        for(auto x : v) cout << x << " ";
        cout << endl;
    }
}
//Tran Trong Nghia
