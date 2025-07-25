#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n > 0) ? "natural\n" : "natural emas\n");

    cin >> n;
    cout << fixed << setprecision(2) << sqrt(n) << endl;  

    cin >> n;
    cout << fixed << setprecision(2) << pow(n, 1.0 / 3) << endl;  

    return 0;
}
