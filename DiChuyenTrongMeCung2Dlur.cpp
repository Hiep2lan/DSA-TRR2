#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int n, a[1005][1005];
bool vs[1005][1005];
vector<string> ans;
void Try(int i, int j, string s){
    if(i ==n && j == n){
        ans.push_back(s);
        return;
    }
    int i1 = i+1, j1 = j+1, i2=i-1, j2= j-1;
    if(i1 <= n && a[i1][j] == 1 && !vs[i1][j]){
        s += "D";
        Try(i1,j,s);
        s.pop_back();
    }
    vs[i][j] = true;
    if(j1 <= n && a[i][j1] == 1){
        s+= "R";
        Try(i,j1,s);
        s.pop_back();
    }
    if(i2 <= n && j <= n && a[i2][j] == 1 && !vs[i2][j]){
        s+= "U";
        Try(i2,j,s);
        s.pop_back();
    }
    if( j2 <= n && a[i][j1] == 1 && !vs[i][j1]){
        s+= "L";
        Try(i,j1, s);
        s.pop_back();
    }
    vs[i][j] = false;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        cin >> n;
        ans.clear();
        for(int i =1; i <=n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        
        if(!a[1][1] || !a[n][n]){
            cout << -1 << endl;
            continue;
        }
        memset(vs, false, sizeof(vs));
        Try(1,1,"");
        if(ans.empty()) cout << -1 <<endl;
        else{
            sort(ans.begin(),ans.end());
            for(auto x : ans){
                cout << x << " ";
            }
            cout << endl;
        }
    }
}
//Tran Trong Nghia
