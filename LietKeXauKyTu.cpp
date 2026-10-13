#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
 char c; int k;
char a[1001];
void in(){
    for(int i = 1; i <= k; i++){
        cout << a[i];
    }
    cout << endl;
}
void Try( int i, char start){
   // int i = 1;
    for(char j = start; j <= c; j++){
        a[i] = j;
        if(i == k) in();
        else Try(i+1, j);
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> c >> k;
    Try(1, 'A');
}
//Tran Trong Nghia
