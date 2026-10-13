#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, k, a[1005], A[1005];
int cnt = 0;
void ktao(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> A[i];
    }
 //sort(A+1, A+n+1);
}
bool check(){
    for(int i = 1; i < k; i++){
        if(A[a[i]] > A[a[i+1]]) return false;
    }
    return true;
}
void in(){
    for(int i = 1; i <= k; i++){
        cout << A[a[i]] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j = a[i-1]+1; j <= n-k+i; j++){
        a[i]=j;
        if(i == k){
            if(check()) cnt++;
        } 
        else Try(i+1);
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ktao();
    Try(1);
    cout << cnt;
}
//Tran Trong Nghia
