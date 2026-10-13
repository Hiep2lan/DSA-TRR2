#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;

main(){
    cin.tie(0); cout.tie(0);
    ios:: sync_with_stdio(false);
    int t; cin >> t; while(t--){
        string s; cin >> s;
        stack<string> st;
        for(int i = s.size()-1; i >= 0; i--){
            if(isalpha(s[i])) st.push(string(1,s[i]));
            else{
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                if(s[i] == '+' || s[i] == '*' ||s[i] == '-' || s[i] == '/'){
                    st.push("(" + a + s[i] + b + ")");
                }
                // if(s[i] == '*'){
                    
                // }
                // if(s[i] == '-'){
                //     st.push(string(1, '('));
                //     st.push(a); st.push(string(1, '-')); st.push(b);
                //     st.push(string(1,')'));
                // }
            }
            
        }
        cout << st.top()<< endl;
    }

}
//Tran Trong Nghia