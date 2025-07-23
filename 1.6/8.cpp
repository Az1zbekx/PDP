#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;

    cin >> a;
    cout << (a % 5 != 0) << endl;

    cin >> a;
    cout << (a % 4 == 0 && a % 3 != 0) << endl;

    int b;
    cin >> a >> b;
    cout << (a > b) << endl;

    cin >> a >> b;
    cout << (a == b) << endl;
}