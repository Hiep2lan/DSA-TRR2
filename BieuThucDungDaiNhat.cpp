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
        stack<int> st;
        int c = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(') st.push(i);
            else{
                if(!st.empty()){st.pop();
                c+=2;}
                else continue;
            }
        }
        cout << c << endl;
    }
}
//Tran Trong Nghia
