#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, a[10];
int check(){
    if((a[2] == 0 && a[1] == 0) || a[3] == 2 || a[5] != 2|| a[4] == 0) return false;
    return true;
}
void in(){
    //if(a[2] != 0) continue;
    for(int i = 1; i <= 8; i++){
            if(a[i] == 1) a[i] = 2; 
        }
    if(check()){
        cout << a[1] << a[2] << "/" << a[3] << a[4] << "/" << a[5] << a[6] << a[7] << a[8];
        cout << endl;
    }    
}
    

void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n){
            in();
        }
        else Try(i+1);
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    Try(1);
}
//Tran Trong Nghia
