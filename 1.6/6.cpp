#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;

    cin >> n;
    cout << (n / 10 > 5 && n % 10 > 5) << endl;

    int a;

    cin >> a;
    cout << (a % 3 == 0) << endl;

    cin >> a;
    cout << (a % 7 == 0) << endl;
}