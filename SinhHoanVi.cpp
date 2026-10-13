#include <bits/stdc++.h>
// #define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

int n, a[100], ok;
void ktao(){
    for(int i = 1; i<= n; i++){
        a[i] = i;
    }
}
void sinh(){
    int i = n-1;
    while( i >= 1 && a[i] > a[i+1]) i--;
    if(i == 0) ok = 0;
    else{
        int j = n;
        while(j >= 1 && a[i] > a[j]) j--;
        swap(a[j], a[i]);
        reverse(a+i+1, a+n+1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        cin >> n;
        ok = 1;
        ktao();
        while(ok){
            for(int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << " ";
            sinh();
        }
        cout << endl;
    }

}
//Tran Trong Nghia
