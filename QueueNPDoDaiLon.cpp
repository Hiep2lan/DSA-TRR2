#include <bits/stdc++.h>
#define endl "\n"
 #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        int n; cin >>n;
        queue<string> q;
        q.push("0"); q.push("1");
        while(!q.empty()){
                string top = q.front(); q.pop();
                int sz = top.size()*2;
                if(sz <= n){
                        string top1 = top;
                        reverse(top1.begin(), top1.end());
                        cout << top +top1 << " ";
                        if(sz < n){
                         q.push(top+"0");
                         q.push(top+"1");
                        }
                }
                
        }
        cout << endl;
    }
}
//Tran Trong Nghia
