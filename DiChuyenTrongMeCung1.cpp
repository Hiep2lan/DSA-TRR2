#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n;
bool visited[100][100];
int a[100][100];
vector<string> ans;

void ktao(){
    cin >> n; ans.clear();
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
   
}
void Try(int i, int j, string s){
    if(i == n && j == n){
        ans.push_back(s);
        return;
    }
    int i1 = i+1; int j1 = j+1;
    if(i1 <= n && a[i1][j] == 1){
        s += "D";
        Try(i1, j, s);
        s.pop_back();
    }
    if(j1 <= n && a[i][j1] == 1){
        s+= "R";
        Try(i, j1, s);
        s.pop_back();
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        ktao();
        if(a[1][1] == 0 || a[n][n] == 0){
            cout << "-1" << endl; continue;
        }
        Try(1, 1, "");
        if(ans.empty()) cout << "-1" << endl;
        else{
            sort(ans.begin(), ans.end());
            for(auto x : ans) cout << x << " ";
            cout << endl;
        }
}}
//Tran Trong Nghia
