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
        for(auto x : s){
            if(isalpha(x)) st.push(string(1,x));
            else{
                string a = st.top(); st.pop();
                string b = st.top(); st.pop();
                string tmp = "(" + b + x + a +")";
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    }
}
//Tran Trong Nghia