#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << (((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) ? "Kabisa yili\n" : "Kabisa yili emas\n");
    
    int x;
    cin >> x;
    if(x >= 0 && x <= 55) cout << "qoniqarsiz\n";
    else if(x >= 56 && x <= 70) cout << "qoniqarli\n";
    else if(x >= 71 && x <= 85) cout << "yaxshi\n";
    else if(x >= 86 && x <= 100) cout << "a'lo\n";
}
