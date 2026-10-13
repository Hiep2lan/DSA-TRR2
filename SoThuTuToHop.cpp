#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, k, a[100], b[100];
void ktao(){
    cin >> n >> k;
    for(int i = 1; i <= k; i++){
        cin >> b[i];
        a[i] = i;
    }
}
void Try(){
    int i = k;
    while(i >= 1 && a[i] == n-k+i) i--;
    if(i == 0) return;
    else{
        a[i]++;
        for(int j = i+1; j <= k; j++){
            a[j] = a[j-1] +1;
        }
    }
}
int check(){
    for(int i = 1; i <= k; i++){
        if(a[i] != b[i]) return 0;
    }
    return 1;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >>t;
    while(t--){
       ktao();
       int cnt = 1;
       while(!check()){
        Try();
        cnt++;
       }
       cout << cnt << endl;

    }
}
//Tran Trong Nghia
