#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

bool check(string s){
    stack<char> st;
    for(auto x : s){
        if(x != ')') st.push(x);
        else{
            bool ok = false;
            while(st.top() != '('){
                char tmp = st.top(); st.pop();
                if(tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/' ){
                    ok = true; 
                }
            }
            st.pop();
            if(!ok) return false;
        }
    }
    return true;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; cin.ignore(); while(t--){
        string s; getline(cin, s);
        if(!check(s)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
//Tran Trong Nghia
