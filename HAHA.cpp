#include<bits/stdc++.h>
using namespace std;
int n, a[100];

bool check(int a[], int n){
    if(a[1] != 1 || a[n] != 0) return false;
    for(int i = 1; i <= n; i++){
        if((a[i] == a[i+1] && a[i]) ) return false;
    }
    return true;
}
void in(){
    for(int i = 1; i <= n; i++){
        if(a[i] == 0) cout << 'A';
        else cout << 'H';
      //  cout << a[i];
    } cout << endl;

}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n){
             if(check(a, n)){
                 in();
                }
        }
        else Try(i+1);
    }
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(1);

    }
}