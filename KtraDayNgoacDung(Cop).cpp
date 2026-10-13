#include<bits/stdc++.h>
using namespace std;

main(){
        int t; cin >> t;
        while(t--){
        string s; cin >> s;
        stack<char> st;
            for(auto x : s){
                if(x == '(' || x == '[' || x == '{') st.push(x);
                    else if(!st.empty()){
                        if( x == ')' && st.top() == '(') st.pop();
                        if( x == ']' && st.top() == '[') st.pop();
                        if( x == '}' && st.top() == '{') st.pop();
                    }
                }
            if(!st.empty()) cout << "NO" << endl;
            else cout << "YES" << endl;
            }   
        }
            
