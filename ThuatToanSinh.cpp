#include<bits/stdc++.h>
using namespace std;

int n, a[100];

int check(int a[], int n){
    int l = 1, r = n;
    while(l <= r){
        if(a[l] != a[r]){
        return 0;
    } 
        l++; r--;
    }
    
    return 1;
}


void in(){
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n) { 
            if(check(a, n)){
                    in();
            }
            
        }
        else Try(i+1);
    }
}
main(){
    cin >> n;
    Try(1);
}
//TTNghia