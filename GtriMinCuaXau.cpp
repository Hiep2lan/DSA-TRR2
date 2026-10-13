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
        int k; cin >> k;
        string s; cin >> s;
        priority_queue<int> Q;
        map<char,int> mp;
        for(char x : s){
            mp[x]++;
        }
        
        for(auto x : mp){
            Q.push(x.second);
        }
        while(k--){
            int tmp = Q.top();
            Q.pop();
            --tmp;
            Q.push(max(tmp,0));
        }
        ll ans = 0;
        while(!Q.empty()){
            ans += Q.top()*Q.top();
            Q.pop();

        }
        cout << ans <<endl;
    }
}
//Tran Trong Nghia
