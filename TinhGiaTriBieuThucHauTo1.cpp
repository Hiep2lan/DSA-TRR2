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
            if(isdigit(x)) st.push(string(1, x));
            else{
                int a =stoi(st.top());
                    st.pop();
                    int b = stoi(st.top()); 
                    st.pop();
                if(x == '*'){
                   st.push(to_string(a*b));  
                }
                if( x == '+') st.push(to_string(a+b));
                if(x == '-') st.push(to_string(b - a));
                if(x == '/') st.push(to_string(b/a));

                
        }
    }
    cout << st.top() << endl;
}
}
//Tran Trong Nghia
