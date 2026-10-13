#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >>t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<int> uni,inter;
        set<int> a, b;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            a.insert(x);
        }
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            b.insert(x);
        }
        set_union(a.begin(), a.end(), b.begin(), b.end(), back_inserter(uni));
        set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(inter));
        for(auto x: uni) cout << x << " ";
        cout << endl;
        for(auto x: inter) cout << x << " ";
        cout << endl;
    }
}
//Tran Trong Nghia
