#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
const ll INF = 1e15;

ll dp[505][505];
int adj[505][505];

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

struct Fraction {
    ll a, b;
    // So sánh a/b < c/d <=> a*d < c*b
    bool operator<(const Fraction& other) const {
        return (__int128)a * other.b < (__int128)other.a * b;
    }
};

void solve() {
    int N;
    if (!(cin >> N)) return;

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            cin >> adj[i][j];
        }
    }

    // Khởi tạo DP
    for (int k = 0; k <= N; ++k)
        for (int i = 1; i <= N; ++i) dp[k][i] = INF;

    // Đỉnh nguồn giả (để đảm bảo đi tới được mọi chu trình)
    // Hoặc đơn giản là chạy từ mọi đỉnh (ở đây dùng đỉnh 1 vì đề bài đảm bảo chu trình)
    for(int i=1; i<=N; ++i) dp[0][i] = 0; 

    for (int k = 1; k <= N; ++k) {
        for (int u = 1; u <= N; ++u) {
            for (int v = 1; v <= N; ++v) {
                if (u == v) continue; 
                if (dp[k-1][u] + adj[u][v] < dp[k][v]) {
                    dp[k][v] = dp[k-1][u] + adj[u][v];
                }
            }
        }
    }

    Fraction min_avg = {200 * 500, 1}; // Giá trị tối đa có thể có
    bool found = false;

    for (int v = 1; v <= N; ++v) {
        if (dp[N][v] >= INF) continue;

        Fraction max_for_v = {-1, 1}; 
        bool valid_v = true;

        for (int k = 0; k < N; ++k) {
            if (dp[k][v] >= INF) continue;
            Fraction current = {dp[N][v] - dp[k][v], (ll)N - k};
            if (max_for_v.a == -1 || max_for_v < current) {
                max_for_v = current;
            }
        }
        
        if (max_for_v.a != -1) {
            if (!found || max_for_v < min_avg) {
                min_avg = max_for_v;
                found = true;
            }
        }
    }

    // Tối giản phân số
    ll common = gcd(min_avg.a, min_avg.b);
    cout << min_avg.a / common << "/" << min_avg.b / common << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}