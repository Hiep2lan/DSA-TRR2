#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n,k, a[1005], A[1005];
void ktao(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> A[i];
    }
}
int check(){
    for(int i = 1; i < k; i++){
        if(A[a[i]] > A[a[i+1]]) return 0;
    }
    return 1;
}
vector<string> ans;

void in(){
    string tmp = "";
    for(int i = 1; i <= k; i++){
       tmp +=to_string(A[a[i]])+ " ";
    }
    ans.push_back(tmp);
}
void Try(int i){
    for(int j = a[i-1]+1; j <= n-k+i; j++){
        a[i] = j;
        if(i == k){if(check()) in ();}
        else Try(i+1);
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ktao();
    for(k = 2; k <= n; k++){
        Try(1);
    }
    sort(ans.begin(), ans.end());
    for(auto x : ans){
        for(auto y : x) cout << y;
        cout << endl;
        }
    }

//Tran Trong Nghia
