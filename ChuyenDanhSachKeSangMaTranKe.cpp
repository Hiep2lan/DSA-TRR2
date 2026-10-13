#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n; cin.ignore();
    vector<int> adj[n+1];
    int a[n+1][n+1] = {0};
    for(int i = 1; i <= n; i++){
      string s; getline(cin, s);
      stringstream ss(s);
      int tmp;
      while(ss >> tmp){
        a[i][tmp] = 1; 
        a[tmp][i] = 1;
      }
        
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}

//Tran Trong Nghia
