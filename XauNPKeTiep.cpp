#include<bits/stdc++.h>
using namespace std;

string s;

void ktao(){
    cin >> s;
}
bool sinh(){
    int i = s.size()-1;
    while(i >= 0 && s[i] == '1'){
        s[i] = '0'; i--;
    }
    if(i == -1) return false;
    else{
        s[i] = '1';
        return true;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        ktao();
        if(sinh()){
           cout << s;
        }
        else{
            cout << string(s.size(), '0');
        }
        cout << endl;
    }
}

