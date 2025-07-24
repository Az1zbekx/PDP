#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    
    cin >> a;
    if(a % 2) cout << a << endl;
    else cout << a * 10 << endl;

    cin >> a;
    if(a % 2) cout << a / 10 << endl;
    else cout << a << endl;

    cin >> a;
    if(a >= 10 && a <= 99) cout << a + 100 << endl;
    else cout << a << endl; 
}3