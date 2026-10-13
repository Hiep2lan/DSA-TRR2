#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n; cin >>n;
    cin.ignore();
    vector<pair<int, int>> vc;
    for(int i = 1; i <= n; i++){
        string s; getline(cin, s);
        stringstream ss(s);
        int tmp;
        while(ss >> tmp){
            if(i < tmp)  vc.push_back({i,tmp});
        }
        

    }
        for(auto x : vc){
             cout << x.first << " "<< x.second << endl;
        }
    
}
//Tran Trong Nghia
