#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, a[1005];
//Cach chuyen tu xau NP sang 1 ma gray:
//-bit dau luon giong nhau
//nhung bit sau o vi tri i cua ma gray duoc xay dung: bit i XOR i-1 cua xau NP

void in(){
    cout << a[1];
    for(int i= 2; i<= n; i++){
        if(a[i] ==a[i-1]) cout << 0;
        else cout  << 1;
    }
    cout << " ";
}
void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n) in();
        else Try(i+1);
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){

        cin >> n;
        Try(1);
        cout << endl;
    }
}
//Tran Trong Nghia
