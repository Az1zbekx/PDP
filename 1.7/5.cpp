#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    
    cin >> a >> b;
    if(a % 2 == 0 && b % 2 == 0) cout << a + b << endl;
    else cout << a * b << endl;

    cin >> a >> b;
    if(a % 2 == 1 && b % 2 == 1) cout << a * b << endl;
    else cout << a << " " << b << endl;

    cin >> a >> b >> c;
    cout << (a % 2) + (b % 2) + (c % 2) << endl;
    
}