#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, k, a[100], f[100];
map<int, int> mp;
void fibo(){
    mp[1] = 1;
    f[1] = f[2] = 1;
    for(int i = 3; i <= 92; i++){
        f[i] = f[i-1] + f[i-2];
        mp[f[i]] = 1;
    }
}
int check(int a[], int n){
    fibo();
    int s = 0;
    for(int i = 1; i <= k; i++){
        s+= a[i];
    }
    if(mp[s] == 1) return 1;
    return 0;
}

void in(){
    for(int i = 1; i <= k; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j = a[i-1]+1; j <= n-k+i; j++){
        a[i] = j;
        if(i == k){
           if(check(a, n)) {in();}
        }
        else Try(i+1);
    }
}
main(){
    //int t; cin >> t; while(t--){
        fibo();
        cin >> n >> k;
        Try(1);
        cout << endl;
   }
//Tran Trong Nghia
