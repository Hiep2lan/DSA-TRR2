#include<bits/stdc++.h>
using namespace std;

int n, a[1005];

void ktao(){
    for(int i = 1; i<= n; i++){
        cin >> a[i];
    }
}
bool sinh(){
    int i = n-1;
    while(i >= 1 && a[i] >= a[i+1]) i--;
    if(i == 0) return false;
    else{
        int j = n;
        while(j >= 1 && a[j] <= a[i]) j--;
        swap(a[j], a[i]);
        reverse(a+i+1, a+n+1);
        return true;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        ktao();
        if(!sinh()){
            for(int i = 1; i <= n; i++){
                cout << i << " ";
            }
        }
        else{
            for(int i = 1; i <= n; i++){
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
}