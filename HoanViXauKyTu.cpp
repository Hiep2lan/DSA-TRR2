#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, a[105], visited[105]={0};
vector<char> v;
void in(){
        for(int i = 1; i <= n; i++){
            cout << v[a[i]]; 
}
        cout << " ";
}
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(visited[j] == 0){
            a[i] = j;
            visited[j] = 1;
            if(i == n){
            in();
            }
            else Try(i+1);
            visited[j] = 0;
        }  
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        v.clear();
        v.push_back('1');
        string s; cin >> s;
        for(int i = 0; i < s.size(); i++){
            v.push_back(char(s[i]));
        }
        n = s.size();
        Try(1);
        cout << endl;
    }

}
//Tran Trong Nghia
