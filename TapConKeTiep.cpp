#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

int ok, n, k, a[1005];

void ktao(){
    for(int i = 1; i <= k; i++){
        cin >> a[i];
    }
}
bool sinh(){
    int i = k;
    while(i >= 1 && a[i] == n-k+i) i--;
    if(i == 0) return false;
    else{
        a[i]++;
        for(int j = i+1; j <= k; j++ ){
            a[j] = a[j-1]+1;
        }
         return true;
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        ktao();
        if(sinh()){
            for(int i = 1; i <= k; i++){
                cout << a[i] << " ";
            }
        }
        else{
            for(int i = 1; i <= k; i++){
                cout << i << " ";
            }
        }
       
        cout << endl;
           
      
    }
}
//Tran Trong Nghia