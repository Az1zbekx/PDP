#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b;
    cout << (a == b + 30) << endl;

    cin >> a >> b >> c >> d;
    cout << (b == max({a, b, c, d}) && b % 2 == 0) << endl;

    cin >> a >> b >> c >> d;
    cout << (c == max({a, b, c, d}) && c % 2 == 0) << endl;
}