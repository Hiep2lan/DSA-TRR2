#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n + 1, vector<int>(m + 1));
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, INF));

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }

        dp[1][1] = 0;

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {

                if(i == 1 && j == 1) continue;

                
                if(i > 1) {
                    dp[i][j] = min(dp[i][j],
                        dp[i - 1][j] + abs(a[i][j] - a[i - 1][j]));
                }

               
                if(j > 1) {
                    dp[i][j] = min(dp[i][j],
                        dp[i][j - 1] + abs(a[i][j] - a[i][j - 1]));
                }

                
                if(i > 1 && j > 1) {
                    dp[i][j] = min(dp[i][j],
                        dp[i - 1][j - 1] + abs(a[i][j] - a[i - 1][j - 1]));
                }
            }
        }

        cout << dp[n][m] << endl;
    }
}