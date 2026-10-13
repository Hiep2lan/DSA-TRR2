#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, k, a[105], K, A[105];
vector<vector<int>> v;
bool check(){
    int t = 0;
    for(int i = 1; i <= k; i++){
        t+= A[a[i]];
    }
    if(t == K) return true;
    return false;
}

void in(){
  if(check()){
       vector<int> tmp;
        for(int i = 1; i <= k; i++){
            tmp.push_back(A[a[i]]);
       }
       sort(tmp.begin(), tmp.end());
       v.push_back(tmp);
       
  }
    
}

void Try(int i){
    for(int j = a[i-1]+1; j <= n-k+i; j++){
        a[i] = j;
        if(i == k){
            in();
        }
        else Try(i+1);
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        v.clear();
        cin >> n >> K;
        for(int i = 1; i <= n; i++) cin >> A[i];
        for(k = 1; k <= n; k++){
            a[0] = 0;
            Try(1);
        }
    sort(v.begin(), v.end());
    if(v.size() ==0) cout << "-1" <<endl;
    else{
        for(auto x: v){
        cout << "[";
        for(int i = 0; i <x.size(); i++){
            if(i == x.size()-1) cout << x[i] << "]";
            else cout << x[i] << " ";
        }
        cout << " ";
    }
    

    cout << endl;
    }
    
    }
}
//Tran Trong Nghia
