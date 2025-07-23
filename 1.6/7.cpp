#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;

    cin >> a;
    cout << (a % 3 == 0 && a % 8 == 0) << endl;

    cin >> a;
    cout << (a % 7 == 0 || a % 9 == 0) << endl;

    cin >> a;
    cout << (a % 3 == 0) << endl;
}