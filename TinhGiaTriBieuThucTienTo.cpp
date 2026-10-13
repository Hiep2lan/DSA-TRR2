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
        string s; cin >> s;
        stack<string> st;
        for(int i = s.size()-1; i >= 0; i--){
            if(isdigit(s[i])) st.push(string(1, s[i]));
            else{
                int a = stoi(st.top()); st.pop();
                int b = stoi(st.top()); st.pop();
                if( s[i] == '+') st.push(to_string(a+b));
                if( s[i] == '-') st.push(to_string(a-b));
                if(s[i] == '*') st.push(to_string(a*b));
                if(s[i] == '/') st.push(to_string(a/b));
            }
        }
        cout << st.top() << endl;
    }
}
//Tran Trong Nghia
