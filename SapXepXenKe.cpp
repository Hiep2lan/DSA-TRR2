#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &x: a) cin >> x;
        sort(a.begin(), a.end());
        int l = 0, r= n-1;
        while(l < r){
            cout << a[r] << " " << a[l] << " ";
            l++; r--;
            if(l == r){
                int mid = (l+r)/2;
                cout << a[mid];
            }
        }
        cout << endl;
    }
}