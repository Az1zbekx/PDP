#include <bits/stdc++.h>
using namespace std;

int main() {
    double m; int k;
    cin >> m >> k;
    if(k <= 3) m *= 0.9;
    else if(k > 15) m *= 1.1;
    cout << fixed << setprecision(2) << m << endl;

    int n;
    cin >> n;

    cout << (n > 25 ? "oynalar ochilsin\n" : "oynalar yopilsin\n");
    return 0;
}
