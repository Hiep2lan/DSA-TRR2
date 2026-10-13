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
        for(int i = 0; i < s.size(); i++){
            if(isalpha(s[i])) st.push(string(1,s[i]));
            else{
                string a = st.top(); st.pop();
                string b = st.top(); st.pop();
                string tmp = string(1, s[i]) + b + a;
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    }
}
//Tran Trong Nghia
