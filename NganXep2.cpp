#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int q; cin >> q;
    stack<int> st;
    while(q--){
        string s;
        cin >> s;
        if(s == "PUSH"){
            int x; cin >> x;
            st.push(x);
        }
        if(s == "POP" && !st.empty()){
            st.pop();
        }
        if(s == "PRINT"){
            if(st.empty()) cout << "NONE" << endl;
            else{ 
                int a = st.top();
                cout << a << endl;
            }
        }
    }
}
//Tran Trong Nghia
