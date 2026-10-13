#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, a[105];
void ktao(){
    cin>>n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}
void sort(int n){
    for(int i = 0; i < n-1; i++){
        bool check = true;
        for(int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){check  = false; swap(a[j],a[j+1]);
            }
        }
        if(check) break;
        
            cout << "Buoc" << " " << i+1 << ':' << " ";
            for(int k = 0; k < n; k++){
                cout << a[k] << " ";
            }
            cout << endl;
        
    }

}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ktao();
    sort(n);
}
//Tran Trong Nghia

