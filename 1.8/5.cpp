#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
   
    if(a == b) cout << "1 va 2 teng\n";
    else if(a == c) cout << "1 va 3 teng\n";
    else if(b == c) cout << "2 va 3 teng\n";
    else cout << "teng emas\n";

    double k, d;
    cin >> k >> d;
    d *= 0.4;
    if(k >= d) cout << "yetarli\n";
    else cout << fixed << setprecision(1) << "yana " << (d) - k << " kerak \n";

    return 0;
}
