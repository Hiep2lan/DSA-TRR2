#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    int mt[n+1][n+1], a[n+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> mt[i][j];
        }
    }
    for(int i = 1; i <= n; i++) a[i] = i; // hoan vi goc
    vector<string> res;
    do{
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum += mt[i][a[i]]; // khi do mt[i][a[i]] se dung boi a[i] la cac hoan vi cua i = 1-> n;
        }
        if(sum == k){
            string ans = "";
            for(int i = 1; i <= n; i++){
                ans += to_string(a[i]);
                ans += " ";
            }
            res.push_back(ans);
        }

    }
    while(next_permutation(a+1, a+n+1)); // sinh hoan vi luu lai vao a[i]
    cout << res.size() << endl;
    for(auto x : res) cout << x << endl;
}
//Tran Trong Nghia
