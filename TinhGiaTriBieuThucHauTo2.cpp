    #include <bits/stdc++.h>
    #define endl "\n"
    // #define int long long
    using namespace std;
    typedef long long ll;

    signed main(){
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t; cin >> t; while(t--){
            int n; cin >> n;
            cin.ignore();
            stack<ll> st;
            string s; getline(cin,s);
            
            stringstream ss(s);
            string tmp;
            while(ss >> tmp){
                if(isdigit(tmp[0]) || tmp.size() > 1 && tmp[0] == '-'){
                    st.push(stoll(tmp));
                }
                else{
                    ll a = st.top(); st.pop();
                    ll b = st.top(); st.pop();
                    if(tmp == "*") st.push(a*b);
                    if(tmp == "+") st.push(a+b);
                    if(tmp == "-") st.push(b-a);
                    if(tmp == "/") st.push(b/a);
                }
            }
            cout << st.top() << endl;
        }
    }
    //Tran Trong Nghia
