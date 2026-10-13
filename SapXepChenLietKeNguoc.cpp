#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[105];
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<string> res;
    string tmp = "Buoc 0: " + to_string(a[0]);
    res.push_back(tmp);
    for(int i = 1; i < n; i++){
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;

        string s = "Buoc " + to_string(i) + ": ";
        for(int k = 0; k <= i; k++){
            s += to_string(a[k]) + " ";
        }
        res.push_back(s);
    }
    
    for(int i = res.size()-1; i >= 0; i--){
        cout << res[i] << endl;
    }
}