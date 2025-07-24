#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    
    cin >> a;
    int x = a / 100, y = (a / 10) % 10, z = a % 10;
    //cout << x << " " << y << " " << z << endl;
    if(x == y && y == z) cout << y << endl;
    else cout << z << endl;
}