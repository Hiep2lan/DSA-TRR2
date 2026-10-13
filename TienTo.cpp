#include <bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        int n; cin >> n;
        cin.ignore();
        string s; getline(cin, s);
        stack<ll>st;
        vector<string> v;
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            v.push_back(tmp);  
        }
        for(int i = v.size()-1; i >= 0; i--){
            string x = v[i];
            if(isdigit(x[0]) || x.size() > 1 && x[0] == '-') st.push(stoll(x));
            else{
                ll a = st.top(); st.pop();
                ll b = st.top(); st.pop();
                if(x == "+") st.push(a + b);
                else if(x == "-") st.push(a - b);
                else if(x == "*") st.push(a * b);
                else if(x == "/") st.push(a / b);
            }
        }
        cout << st.top() << endl;
    }
    system("cls"); // Windows
}
//Tran Trong Nghia
