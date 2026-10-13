#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >>t;
    //cin.ignore();
    while(t--){
        int n; cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        set<char> st;
        for(auto x : s){
           if(x != ' ' ) st.insert(x);

        }
        for(auto x : st) cout << x << " ";
        cout << endl;
        
    }
}
//Tran Trong Nghia
