#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DT.INP", "r", stdin);
	freopen("DT.OUT", "w", stdout);
    int t; cin >> t;
    if(t == 1){
        
        int n; cin >> n;
        vector<int> adj[n+1];
        for(int i =1; i <= n; i++){
            int k; cin >> k;
            for(int j = 1; j <= k; j++){
                int x; cin >> x;
                adj[i].push_back(x);
            }
        }
        for(int i = 1; i <= n; i++){
            cout << adj[i].size() << " ";
        }
    }
    if(t == 2){
        int n; cin >> n;
        vector<pair<int,int>> vc;
        cin.ignore();
        for(int i = 1; i <= n; i++){
            string s;
            getline(cin, s);
            stringstream ss(s);
            int k; ss >> k;
            int tmp;
            while(ss >> tmp){
               // adj[i].push_back(tmp);
             if( i < tmp)   vc.push_back({i,tmp});
            }
        }
        cout << n << " " << vc.size()  << endl;
        for(auto x : vc){
            cout << x.first <<  " " << x.second << endl;
        }
    }
}
//Tran Trong Nghia
