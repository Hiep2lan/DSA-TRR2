#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
bool check(char c){
    if( c== '+' || c == '-' || c == '*' || c == '/' ) return true;
    return false;
}
void solve(){
    string s;
    getline(cin, s);
    stack<char> st;
    for(auto x : s){
        if( x != ')') st.push(x);
        else{
            bool ok = false;
            while(st.top() != '('){
                if(check(st.top())) ok = true;
                st.pop();
            }
            st.pop();
            if(!ok){
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    cin.ignore();
    while(t--){
        solve();
    }
}
//Tran Trong Nghia
