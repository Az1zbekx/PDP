#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a == max({a, b, c})) << endl;

    cin >> a >> b >> c;
    cout << (c == max({a, b, c})) << endl;
}