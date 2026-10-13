#include<bits/stdc++.h>
using namespace std;
//#define int long long
typedef long long ll;

int n, k, a[100];

int check(int a[], int n){
    int sum = 0;
    for(int i = 1; i <= k; i++){
        sum += a[i];
    }
    if(sum %2 == 0) return 1;
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
        cin >> n >> k;
        Try(1);
        cout << endl;
   }
//}