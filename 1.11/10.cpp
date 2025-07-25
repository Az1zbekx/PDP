#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 13; i <= 60; i++){
        cout << i * 4000 << endl;
    }
    cout << endl;

    int n, k = 0;
    cin >> n;
    for(int i = 35; i <= n; i++){
        if(i % 3 != 0){
            cout << i << " ";
            k++;
        }
    }
    cout << endl << k << endl;
    return 0;
}
