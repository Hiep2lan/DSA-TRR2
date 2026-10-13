#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int dist[305][305];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, q;
    cin >> n >> m >> q;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j) dist[i][j] = 0;
            else dist[i][j] = INF;
        }
    }
    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = min(dist[u][v], w); // có thể nhiều cạnh
    }
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                dist[i][j] = min(dist[i][j], max(dist[i][k], dist[k][j]));
            }
        }
    }

    
    while(q--){
        int s, t;
        cin >> s >> t;
        if(dist[s][t] == INF) cout << -1 << endl;
        else cout << dist[s][t] << endl;
    }
}