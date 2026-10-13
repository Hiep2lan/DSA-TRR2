#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, a[1005], ok; string s;
ll res[501]; // luu cac boi so tu 1den 500
vector<string> ans; // luu cac xau np 09

void sinh(){
    int i = s.size()-1;
    while(i >= 0 && s[i] == '9'){
        s[i] = '0';
        i--;
    }
    if(i == -1) ok = 0;
    else{ 
        s[i] = '9';
    }
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    s ="0000000000000";
    ok = 1;
    while(ok){
        ans.push_back(s);
        sinh();
    }
    for(int i= 1; i <= 500; i++){
        for(string x: ans){
            ll tmp = stoll(x);
            if(tmp !=0  && tmp % i == 0){
                res[i] = tmp;
                break;
            }
        }
    }
    int t; cin >> t;
    while(t--){
        cin >> n;
        //int cnt = 0;
        // for(int i = 1; i <= 500; i++){
        //   cnt += res[i] != 0;
        // }
        // check xem xau np da setup da sinh du boi cua 500 so chua, chua thi them bit 0 vao xau np ban dau
        cout << res[n] << endl;
    }
    
}
//Tran Trong Nghia
