#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == 0 || j == n - 1 || i == j) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n - 1 || i == j) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}