#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    
    cin >> n;
    cout << (n >= 1000 && n <= 9999 && n % 2 == 0) << endl;

    cin >> n >> m;
    cout << (n % 2 == 1 && m % 2 == 1) << endl;
    
    cin >> n >> m;
    cout << (n % 2 == 0 && m % 2 == 0) << endl;

}