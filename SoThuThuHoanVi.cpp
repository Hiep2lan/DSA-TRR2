#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

int check(int a[], int n, int A[]){
    for(int i = 1; i <= n; i++){
       if( a[i] != A[i]) 
        return 0;
    }
    return 1;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        int a[n+1], A[n+1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            A[i] = i;
        }
        int c=1;
        if(check(a, n, A)) cout << c;
        while(check(a, n, A) == 0){
            c++;
            next_permutation(A+1, A+n+1);
            if(check(a, n, A)){
                cout << c << " ";
                break;
            }
         
        }
          cout << endl;
    }
        
    }

//Tran Trong Nghia
