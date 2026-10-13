#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        string s; cin >> s;
        stack<string> st;
        for(int i = s.size()-1; i >= 0; i--){
            if(isalpha(s[i])) st.push(string(1,s[i]));
            else{
                string a = st.top(); st.pop();
                string b = st.top(); st.pop();
                if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                    st.push( a + b + s[i]);
                }
            }
        }
        cout << st.top() <<endl;
    }
}
//Tran Trong Nghia
