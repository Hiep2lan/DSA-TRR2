#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

void sinh(string s){
    int i = s.size()-2;
    while(i >= 0 && s[i] >= s[i+1]) i--;
    if(i == -1) cout << "BIGGEST" << endl;
    else{
        int j = s.size()-1;
        while(j >= 0 && s[i] >= s[j]) j--;
        swap(s[i],s[j]);
        reverse(s.begin()+i+1, s.end());
        cout << s << endl;
    }

}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        int tt; string s;
        cin >> tt >> s;
        cout << tt << " ";
        sinh(s);
       // cout << endl;
    }
}
//Tran Trong Nghia
