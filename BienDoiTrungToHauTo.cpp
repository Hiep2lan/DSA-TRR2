#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int uutien(char c){
    if(c == '^') return 3;
    if(c == '+' || c == '-') return 1;
    if(c == '*' || c == '/') return 2;
    return 0;
}
string check(string s){
    stack<char> st;
    string res = "";
    for(auto x : s){
        if(isalpha(x)) res += x;
        else if( x == '(') st.push(x);
        else if(x == ')'){
            while(st.top() != '('){
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && uutien(x) <= uutien(st.top())){
                res+= st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
    return res;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        string s; cin >> s;
        cout << check(s) << endl;
    }
}
//Tran Trong Nghia
