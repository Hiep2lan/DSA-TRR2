#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
void Try(int i, char a, char b, char c){
    // cout << a << " -> " << c << endl;
    Try(i - 1, a, c, b);
    cout << a << " -> " << c << endl;
    Try(i - 1, b, a, c);
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    Try(n, 'A', 'B', 'C');
}
//Tran Trong Nghia
