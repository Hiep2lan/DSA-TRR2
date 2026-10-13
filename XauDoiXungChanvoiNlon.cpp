#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, ok;
string s;
void sinh(){
    int i = s.size()-1;
    while(i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if(i == -1) ok = 0;
    else{
        s[i] = '1';
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >>t; while(t--){
        int n; cin >> n;
        ok = 1;
        s = string(n/2, '0');
        while(ok){
            cout << s;
            string tmp = s;
            reverse(tmp.begin(), tmp.end());
            cout << tmp << endl;
            sinh();
        }
    }
}
//Tran Trong Nghia
