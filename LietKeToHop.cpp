#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, k, a[25];
vector<int> v;
set<int> st;
void in(){
    for(int i = 1; i <= k; i++){
        cout << v[a[i]] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j = a[i-1]+1; j <= n-k+i; j++){
        a[i] =j;
        if(i == k){
           in();
        }
        else Try(i+1);
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
       int x; cin >> x;
        st.insert(x);
    }
    v.push_back(0);
    for(auto x : st){
        v.push_back(x);
    }
   n = st.size();
    //a[0] = 1;
    Try(1);
}
//Tran Trong Nghia
