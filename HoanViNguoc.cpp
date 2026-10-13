#include<bits/stdc++.h>
using namespace std;

int n, a[100], used[100] = {0};

void in(){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << " ";
}
void Try(int i){
    for(int j = n; j >= 1; j--){
        if(used[j] == 0){
            a[i] = j;
            used[j] = 1;
            if(i == n){
            in();
        }
        else Try(i+1);
        used[j] = 0;
        }
        
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        //memset(used, 0, sizeof(used));
        Try(1);
        cout << endl;
    }
}