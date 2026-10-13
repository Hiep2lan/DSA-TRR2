#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
char c;
int n;
char a[1001];
int used[1001] = {0};
//sudung HoanVi
char check(char c){
    return c == 'A' ||  c == 'E';
}
void in(){
    for(int i = 2; i < n; i++){
        if(check(a[i]) && !check(a[i-1]) && !check(a[i+1])) return;
    }
    for(int i = 1; i <= n; i++){
        cout << a[i] ;
    }
    cout << endl;
}
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(used[j] == 0){
            a[i] = char(j + 'A' -1);
            used[j] = 1;
            if( i == n) in();
            else Try(i+1); // khac nhau thi Try(i+1, j) // tat ca thi (i+1, start)
            used[j] = false;
        }
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> c;
    n = c - 'A' +1;
    Try(1);
}
//Tran Trong Nghia
