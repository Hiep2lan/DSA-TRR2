#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<int> adj[n+1];
    int a[n+1][n+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n ;j++){
            cin >> a[i][j];
            if(i < j && a[i][j] == 1){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(auto x : adj[i]){
            cout << x << " ";
        }
        cout << endl;
    }
}
//Tran Trong Nghia
