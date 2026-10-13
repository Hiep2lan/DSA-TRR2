#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int t, n, a[105][105];

set<int> adj[105]; int deg[105];
void ktao(){
    cin >> t >> n;
    for(int i = 1; i <=n ;i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1&& i <j){
                adj[i].insert(j);
                adj[j].insert(i);
               // deg[i]++; deg[j]++;
            }
        }
    }

}
void euler(int u){
    stack<int> st;
    vector<int> EC;
    st.push(u);
    while(!st.empty()){
        int top = st.top();
        if(adj[top].size() != 0){
            int y = *adj[top].begin();
            st.push(y);
            adj[top].erase(y);
            adj[y].erase(top);

        }
        else{
            st.pop();
            EC.push_back(top);
        }
    }
    reverse(EC.begin(), EC.end());
    for(auto x : EC) cout << x << " ";
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ktao(); euler(1);

}
//Tran Trong Nghia
