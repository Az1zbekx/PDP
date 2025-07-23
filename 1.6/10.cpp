#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << (b == min({a, b, c})) << endl;

    cin >> a >> b;
    cout << (a == b * 2) << endl;
}