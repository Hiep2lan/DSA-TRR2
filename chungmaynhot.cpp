#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n, m;
int a[105][105]={0};
int deg1[105], deg2[105]={0};
int main(){ 
    // freopen("TK.INP", "r", stdin);
    // freopen("TK.OUT", "w", stdout);
    faster;
    int t;
    cin >> t;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){    
                a[i][j]=10000;
            }
        }
    for(int i=1; i<=m; i++){
        int u, v , w;
        cin >> u >> v >> w;
        deg1[u]++;
        deg2[v]++;
        a[u][v]=w;
    }

    if(t==1){       
        for(int i=1; i<=n; i++){
            cout << deg2[i] << " " << deg1[i] << "\n";
        }
    }
    else{
        cout << n << "\n";
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(i==j) a[i][j]=0;
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    } 
}
