#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;

void Sort(int a[], int n){
    int step = 1;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
        cout << "Buoc " << step << ": "; step++;
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    }
    
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a[n];
    for(auto &x: a){ 
        cin >> x;
    }
    Sort(a, n);
}
//Tran Trong Nghia
