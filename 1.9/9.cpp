#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    int x;
    cin >> n >> x;

    switch(x) {
        case 1:
            cout << fixed << setprecision(2) << n / 12500 << " dollar\n";
            break;
        case 2:
            cout << fixed << setprecision(2) << n / 13500 << " yevro\n";
            break;
        case 3:
            cout << fixed << setprecision(2) << n / 140 << " rubl\n";
            break;
        default:
            cout << "Error\n";
    }

    return 0;
}
