#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >>t; cin.ignore();
    while(t--){
        string s; getline(cin,s);
        stack<string> st;
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            st.push(tmp);
        }
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}
//Tran Trong Nghia
