#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<char> st;
        for(auto x : s){
            if( x == '(') st.push(x);
            else{
                if(st.empty()) st.push(x);
                else if(!st.empty() && st.top() == '(') st.pop();
                else st.push(x);
            }
        }
        int c = 0;
        while(!st.empty()){
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            if(a == '(' && b == ')') c+= 2;
            else c++;
        }
        cout << c << endl;
    }

    
}