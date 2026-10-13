    #include <bits/stdc++.h>
    #define endl "\n"
    #define int long long
    using namespace std;
    typedef long long ll;

    signed main(){
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t; cin >> t; while(t--){
            int n; cin >> n;
            vector<int> a(n), res(n); 
            stack<int> st;
            for(int i = 0; i < n; i++) cin >> a[i];
            for(int i = n-1; i >= 0; i--){
                while(!st.empty() && st.top() <= a[i]){
                    st.pop();
                }
                 if(st.empty()) res[i] = -1;
                else{
                    res[i] = st.top();
                }
                st.push(a[i]);
            }
            for(auto x  :res) cout << x << " ";
            cout << endl;
            //res.clear();
        }
    }
    //Tran Trong Nghia
