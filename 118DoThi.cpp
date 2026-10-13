#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
int t, n , m, deg1[105], deg2[105];
vector<pair<int,int>> v;
int a[105][105] = {0};
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // freopen("DT.INP", "r", stdin);
    // freopen("DT.OUT", "w", stdout);
    cin >> t >> n;
    cin.ignore();
    for(int i =1; i <= n; i++){
       
        int k; cin >> k;
        deg2[i] = k;
        for(int j = 1; j <= k; j++){
            int tmp; cin >> tmp;
            deg1[tmp]++;
            a[i][tmp] = 1;
            // if(i < tmp)v.push_back({i, tmp});
        }
    }
    if(t == 1){
        for(int i = 1; i <= n; i++){
            cout <<deg1[i] << " " <<deg2[i] << endl;
        }
    }
    else{
        cout<< n << endl;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}
//Tran Trong Nghia
