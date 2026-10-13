#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, k, a[1005];
set<int> se;
void ktao(){
    cin >> n >> k;
    for(int i = 1; i <=k; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
}
bool sinh(){
    int i = k;
    while(i >= 1 && a[i] == n-k+i) i--;
    if(i == 0) return false;
    else{
        a[i]++;
        for(int j = i+1; j <= k; j++){
            a[j] = a[j-1] +1;
        }
        return true;
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        ktao();
        int cnt = 0;
        if(sinh()){
            for(int i = 1; i <= k; i++){
                if(se.find(a[i]) == se.end()) cnt++;
            }
        }
        else cnt = k;
        cout << cnt << endl;
        se.clear();
    }
}
//Tran Trong Nghia
