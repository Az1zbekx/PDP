#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cout << i << " ";
        cout << endl;
    }

    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--){
            cout << i * 10 + (n - j) + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}