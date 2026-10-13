#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, k, a[44]; set<int> st;
void ktao(){
    for(int i = 1; i <= k; i++){
        cin >> a[i];
        st.insert(a[i]);
    }
}
bool Sinh(){
    int i = k;
    while(i >= 1 && a[i] == n-k+i) i--;
    if(i == 0) return false;
    else{
        a[i]++;
        for(int j = i+1; j <= k; j++){
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
        int cnt = 0;
         cin >> n >> k;
        ktao();
        if(Sinh()){
            for(int i = 1; i <= k; i++){
               if(st.find(a[i]) == st.end()) cnt++;
            }
        }
        else{ 
           cnt = k;
        }
         cout << cnt << endl;
         st.clear();
    }
}
//Tran Trong Nghia
