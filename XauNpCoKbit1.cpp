#include<bits/stdc++.h>
using namespace std;

int n, k, a[100];

int check(int a[], int n, int k){
    int c = 0;
    for(int i = 1; i <= n; i++){  
        if(a[i] == 1) c++;
    }
    if(c == k) return 1;
    return 0;

}
void in(){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << endl;
}
void Try(int i){
    for(int j = 0; j <= 1   ; j++){
        a[i] = j;
        if(i == n){
            if(check(a,n,k)) in();
        }
        else Try(i+1);
    }
}

main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        Try(1);
       // cout << endl;
    }
}