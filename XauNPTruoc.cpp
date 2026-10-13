#include<bits/stdc++.h>
using namespace std;
string a;
void ktao(){
    cin >> a;
    }

bool sinh(){
    int i = a.size()-1;
    while(i >= 0 && a[i] == '0'){
        
        a[i] = '1';
        i--;
    }
    if( i == -1) return false;
    else{
        a[i] = '0';
        return true;
    }
}
main(){
    int t; cin >> t;
    while(t--){
       // cin >> n;
        ktao();
        if(sinh()){
           cout << a;
        }
        else{
            cout << string(a.size(), '1');
        }
        cout << endl;
    }
}