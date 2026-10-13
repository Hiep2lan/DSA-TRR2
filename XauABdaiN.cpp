#include <bits/stdc++.h>
//#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

int n, a[100];

void in(){
    for(int i = 1; i <= n; i++){
        if(a[i] == 1) cout << 'B';
        else cout << 'A';
    }
    cout << " ";
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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        cin >> n; Try(1);
        cout << endl;
    }
    
}
//Tran Trong Nghia
