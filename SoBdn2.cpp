#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        int n; cin >> n;
        queue<string> q;
    q.push("1");
    int c = 0;
    while(true){
        string top = q.front();
        q.pop();
        if(stoll(top) % n == 0){ 
            cout << top << endl;
            break;
        }
        q.push(top +"0"); q.push(top +"1"); 
    }
    }
}
//Tran Trong Nghia
