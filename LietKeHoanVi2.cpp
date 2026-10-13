#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

int n, m, a[100], used[100] = {0};
int check(int a[], int n){

    if(a[n] == m) return 1;
    return 0;
}

void in(){
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(used[j] == 0){
            a[i] = j; used[j] = 1;
            if(i == n){
            if(check(a, n)){
                in();
            }
           
        }
       else Try(i+1);
       used[j] = 0;
    }
    }
     
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    Try(1);
    
}
//Tran Trong Nghia
