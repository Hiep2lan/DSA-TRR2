#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int a[],int n){
    int step = 1;
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        int tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
        cout << "Buoc " << step << ": "; step++;
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    SelectionSort(a, n);
    cout << endl;

}