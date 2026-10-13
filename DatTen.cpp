#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int m,n, k, a[105];
vector<string> v;
vector<vector<string>> ans;
void in(){
    vector<string> tmp;
    for(int i = 1; i <= k; i++){
        tmp.push_back(v[a[i]]);
    }
    ans.push_back(tmp);
}

void Try(int i){
    for(int j = a[i-1]+1; j <= n-k+i; j++){
        a[i] = j;
        if(i == k){
            in();
        }
        else Try(i+1);
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> m >> k;
    set<string> st;
    while(m--){
        string s; cin >> s;
        st.insert(s);
    }
    v.push_back("");
    for(auto x: st){
        v.push_back(x);
    }

    n = v.size()-1;
    Try(1);
    for(auto x: ans){
        for(auto y : x ){
            cout << y << " ";
        }
        cout << endl;
    }
    
}
//Tran Trong Nghia
