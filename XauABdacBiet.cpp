#include<bits/stdc++.h>
using namespace std;
int n, k, a[1001];
vector<vector<char>> ans;
void in(){
    vector<char> tmp;
    for(int i = 1; i <= n; i++){
        if(a[i] == 1) tmp.push_back('A');
        else tmp.push_back('B');
    }
    ans.push_back(tmp);
    //cout << endl;
}
void check(){
    int repeat = 0 , i = n-1;
    while(i >= 1){ 
        int cnt = 1;
        while(i >= 1 && a[i] == a[i+1] && a[i] == 1){
        cnt++; i--;
        }
    if(cnt == k) repeat++;
    i--;
    
}
    if(repeat == 1){ 
        in();
    }
}
void Try(int i){
    for(int j = 1; j >= 0; j--){
        a[i] = j;
        if(i == n){
           check();
        }
        else Try(i+1);
    }
}
//void solve(){
  


main(){
    cin >> n >> k;
    Try(1);
    cout << ans.size() << endl;
    for(auto &x : ans){
        for(auto &y : x){
            cout << y;
        }
        cout << endl;
    }
}
    
