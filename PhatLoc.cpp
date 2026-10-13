#include<bits/stdc++.h>
using namespace std;

int n, a[100];

bool check(){
    if(a[1] == 1 || a[n] == 0) return false;
    for(int i = 1; i < n; i++){
        if(a[i] == a[i+1] && a[i] == 0) return false;
    }
    for(int i = 1; i <= n-3; i++){
        if(a[i] == 1 && a[i+1] == 1 && a[i+2] == 1 && a[i+3] == 1) return false;
    }
        
    
    return true;
}

void in(){
    for(int i = 1; i <=  n; i++){
      if(a[i] == 0) cout << '8';
      else cout << '6';
    } 
    cout << endl;
}
void Try(int i){
    for(int j = 1; j >= 0; j--){
        a[i] = j;
        if(i == n){
            if(check()) in();
        }
        else Try(i+1);
    }
}
main(){
    cin >> n;
    Try(1);
}
