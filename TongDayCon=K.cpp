#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, k, a[10];
void ktao(){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}
bool Sinh(){
    int i = n-1;
    while(i >= 1 && a[i] == n-k+i) i--;
    if(i == 0) return false;
    else{
        a[i]++;
        for(int j = a[i-1] +1; j <= n-k+i; j++){
            a[j] = a[j-1] +1;
            return true;
        }
    }
}
bool check(vector<int> v){
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    if(sum !=k) return false;
    return true;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    int c;
    vector<int>v;
    ktao();
    if(Sinh()){
        for(int i = 1; i <= k; i++){
            v.push_back(a[i]);
        }
        if(check(v)){
            for(auto x : v) cout << x << " " <<endl;
            c++;
            v.clear();
        }
        cout << c;
    }

}
//Tran Trong Nghia
