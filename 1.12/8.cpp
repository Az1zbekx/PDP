#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int i = 2; i <= 9; i++){
        for(int j = 1; j <= 10; j++){
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }

    int a, b;
    cin >> a >> b;
    for(int i = a + 1; i < b; i++){
        for(int j = 0; j < i; j++){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}