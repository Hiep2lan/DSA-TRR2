#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s;
    stack<int> st;
    while(cin >> s ){
        if(s == "push"){
        int x; cin >> x;
        st.push(x);
        }
        if(s == "show"){
            if(st.empty()) cout << "empty" << endl;
            stack<int> sk;
            while(!st.empty()){
                int a = st.top(); st.pop();
                sk.push(a);
            }
            while(!sk.empty()){
                st.push(sk.top());
                cout << sk.top() <<  " ";
                sk.pop();
            }
            cout << endl;
        }
        if(s == "pop" && !st.empty()){
            st.pop();
        }
        
    
    
    }
}
//Tran Trong Nghia
