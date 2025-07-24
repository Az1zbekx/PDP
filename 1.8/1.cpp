#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int mx = a;
    mx = (b > mx) ? b : mx;
    mx = (c > mx) ? c : mx;
    cout << mx << endl;

    cin >> a >> b >> c;
    int x, y, z;
    x = a;
    x = (b > x) ? b : x;
    x = (c > x) ? c : x;

    z = a;
    z = (b < z) ? b : z;
    z = (c < z) ? c : z;

    y = a + b + c - x - z;

    cout << z << " " << y << " " << x << endl;
}