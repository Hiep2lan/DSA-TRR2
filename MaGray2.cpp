#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
void solve(string s){
    string res = "";
    res += s[0];
    for(int i = 1; i < s.size(); i++){
        if(s[i] == '1'){
            if(res[i-1] == '0') res += "1";
            else res+= "0";
        }
        else res+= res[i-1];
    }
    cout << res << endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        string s; cin >> s;
        solve(s);
    }
}
//Tran Trong Nghia
