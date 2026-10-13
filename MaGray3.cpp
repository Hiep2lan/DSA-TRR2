#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
void solve(string s){
    cout << s[0];
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]) cout << 0;
        else cout << 1;
    }
}
//Cach chuyen tu xau NP sang 1 ma gray:
//-bit dau luon giong nhau
//nhung bit sau o vi tri i cua ma gray duoc xay dung: bit i XOR i-1 cua xau NP

//Cach chuyen tu 1 ma gray sang ma NP:
//bit dau giong nhau
//cac bit thu i cua xau np duoc ktra =: Kiem tra kt thu i cua ma gray
//Neu bit i cua ma gray la 0 => bit i cua ma np se copy bit thu i -1 cua ma NP;
// Nguoc lai, bit thu i cua ma nhi phan se la lat cua bit i-1 cua ma NP;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;cin >> t; while(t--){
        string s; cin >> s;
        solve(s);
        cout << endl;
    }
}
//Tran Trong Nghia
