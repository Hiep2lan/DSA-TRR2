#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int check(string s){
    stack<char> st;
    for(auto x : s){
        if(x == '[' || x == '(' || x == '{') st.push(x);
        else{
            if(st.empty()) return 0;
            else if(!st.empty()){
                if((st.top() == '(' && x == ')') || (st.top() == '[' && x == ']') ||(st.top() == '{' && x == '}') ) st.pop();
                else return 0;
            }
        }
        
    }
    // return st.empty() 
    if(st.empty()) return 1;
    return 0;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s; 
        if(check(s)) cout << "YES" <<endl;
        else cout << "NO" <<endl;
        
    }
}

//Tran Trong Nghia
