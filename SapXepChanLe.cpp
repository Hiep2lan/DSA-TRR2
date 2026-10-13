#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"


int main(){
   
    int n;
    cin >> n;
    int a[n+1];
    vector<int> Le, Chan;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(i % 2 == 0){
            Chan.push_back(a[i]);
        }
        else{
            Le.push_back(a[i]);
        }
    }
    sort(begin(Le), end(Le));
    sort(begin(Chan), end(Chan), greater<int>());
    int i = 0, j = 0;
    for(int l = 1; l <= n; l++){
        if(l % 2 == 0){
            cout << Chan[i++] << " ";
        }
        else{
            cout << Le[j++] << " ";
        }
    }
}