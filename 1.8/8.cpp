#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, m;
    cin >> s >> m;
    if(s <= 5 * m) cout << "9%\n";
    else if(s <= 10 * m) cout << "16%\n";
    else cout << "23%\n";

    int n;
    cin >> n;
    if(n == 101) cout << "o't o'chirish xizmati\n";
    else if(n == 102) cout << "militsiya xizmati\n";
    else if(n == 103) cout << "tez tibbiy yordam xizmati\n";
    else if(n == 104) cout << "tabiiy gaz xizmati\n";
    else cout << "Error\n";
}


