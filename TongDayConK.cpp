#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, k, s;
int a[105], A[105];
vector<vector<int>> ans;

bool cmp(vector<int> a, vector<int> b){
    if(a[0] != b[0]) return a > b;
    if(a[1] != b[1]) return a >b;
    return a > b;
}
void in(){
    int sum = 0;
    for(int i = 1; i <= k; i++){
        sum += A[a[i]];
    }
    if(sum == s){
        vector<int> tmp;
        for(int i = 1; i <= k; i++){
            tmp.push_back(A[a[i]]);
        }
        ans.push_back(tmp);
    }
}
void Try(int i){
    for(int j = a[i-1] +1; j <= n-k+i; j++){
        a[i] = j;
        if(i ==k){
            in();
        }
        else Try(i+1);
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> s;
    for(int i = 1;  i<= n; i++){
        cin >> A[i];
    }

    for( k = 1; k<= n; k++){
        Try(1);
    }
    
    sort(ans.begin(), ans.end(), cmp);
    for(auto x : ans){
        for(auto y : x) cout << y << " ";
        cout << endl;
    }
    cout << ans.size();
}

//Tran Trong Nghia
