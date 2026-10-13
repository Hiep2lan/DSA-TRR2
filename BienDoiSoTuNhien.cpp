    #include <bits/stdc++.h>
    #define endl "\n"
    // #define int long long
    using namespace std;
    typedef long long ll;
    void solve(int n){
        unordered_map<int,int> visited;
        queue<pair<int,int>> q;
        q.push({n, 0});
        visited[n] = true;
        while(!q.empty()){
            pair<int,int> top = q.front(); q.pop();
            if(top.first == 1){
                cout << top.second << endl; return;
            }
             if(top.first -1 == 1){
                cout << top.second +1 << endl; return;
            }
            else{
                if(top.first - 1 > 1 && !visited[top.first-1]){
                    q.push({top.first-1, top.second+1});
                    visited[top.first-1] = true;
                }
            }
            for(int i = 2; i <= sqrt(top.first); i++){
                if(top.first % i == 0){
                    int x = max(i, top.first/i);
                    if(x == 1){
                        cout << top.second+1 << endl;
                        return;
                    }
                    else{
                        if(!visited[x]){
                            q.push({x, top.second+1});
                            visited[x] = true;
                        }
                    }
                }
            }
        }

    }
    signed main(){
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t; cin >> t; while(t--){
        int n; cin >> n;
           // memset(visited, false, sizeof(visited));
            solve(n);
        }
    }
    //Tran Trong Nghia
