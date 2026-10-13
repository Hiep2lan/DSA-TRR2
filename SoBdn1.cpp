#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
vector<string> v;
void solve(){
    queue<string> q;
    q.push("1");
    while(true){
        string top = q.front();
        q.pop();
        if(top.size() > 18) return;
        else{
            v.push_back(top);
            q.push(top + "0");
            q.push(top + "1");
        }
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    solve();
    int t; cin >> t; while(t--){
        ll n; cin >> n;
        int index;
        for(int i = 0; i < v.size(); i++){
            if(stoll(v[i]) > n){
                 index = i; break;
            }
        }
        cout << index-1+1 << endl;
       // for(auto x : v) x.clear();
    }
}
//Tran Trong Nghia
