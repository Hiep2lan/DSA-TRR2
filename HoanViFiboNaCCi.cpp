#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

int ok, n, f[100], a[100];
map <int, int> mp;
void fibo(){
    mp[1] = 1;
    f[1] = f[2] = 1;
    for(int i = 3; i <= 92; i++){
        f[i] = f[i-1] + f[i-2];
        mp[f[i]] = 1;
    }
}
void ktao(){
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
}
// bool sinh(){
//     int i = n-1;
//     while(i >= 1 && a[i] > a[i+1]) i--;
//     if(i == 0) return false;
//     else{
//         int j = n; 
//         while(j >= 1 && a[i] > a[j]) j--;
//         swap(a[i], a[j]);
//         reverse(a + i +1, a+n +1);
//          return true;
//     }
// }

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    fibo();
    cin >> n; //ok = 1;
    ktao();
    int cnt = 0;
    do{
        cnt++;
        if( mp[cnt]){
        cout << cnt++ << ": ";
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        cout << endl; 
        


        }
    }
    
    while(next_permutation(a+1, a+n+1));

}
//Tran Trong Nghia
