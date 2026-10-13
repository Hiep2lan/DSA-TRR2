#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int Q; cin >> Q;
    deque<int> dq;
    while(Q--){
        string s; cin >> s;
        if(s == "PUSHBACK"){
            int x; cin >> x;
            dq.push_back(x);
        }
        else if(s == "PUSHFRONT"){
            int x; cin >> x; dq.push_front(x);
        }
        else if(s =="POPFRONT" && !dq.empty()) dq.pop_front();
        else if(s == "POPBACK" && !dq.empty()) dq.pop_back();
        else if(s == "PRINTFRONT"){
            if(!dq.empty()) cout << dq.front() << endl;
            else cout << "NONE" << endl;
        } 
        else if(s == "PRINTBACK"){
            if(!dq.empty()) cout << dq.back() << endl;
            else cout << "NONE" << endl;
        }
    }

}
//Tran Trong Nghia
