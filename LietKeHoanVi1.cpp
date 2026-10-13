#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

int n, cnt = 0 , a[100], test[100] = {0};

void in(){
    cout << ++cnt << ":" << " ";
    for(int i =1; i <= n; i++){
        
        cout << a[i] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(test[j] == 0){
             a[i] = j;
             test[j] = 1;
        
        if(i == n){
            in();
        }
        else {
            Try(i+1); 
        }
        test[j] = 0;
    }
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n; Try(1);
}
//Tran Trong Nghia
