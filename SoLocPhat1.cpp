#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
vector<string> v;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        int n; cin >> n;
        queue<string> q;
        q.push("6"); q.push("8");
        while(true){
            string top = q.front();
            q.pop(); 
            if(top.size() > n) break;
            v.push_back(top); 
            q.push(top +"6");
            q.push(top +"8");
        }
        for(int i= v.size()-1; i >= 0; i--) cout << v[i] << " ";
        v.clear();
        cout << endl;
    }
}
//Tran Trong Nghia
