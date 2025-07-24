#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, x, y, z;
    cin >> a;
    z = a % 10;
    y = (a / 10) % 10;
    x = a / 100;
    if(x == z) cout << x + y + z << endl;
    else cout << z * y * x << endl;

}