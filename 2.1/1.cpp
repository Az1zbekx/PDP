#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b ,c, x, y ,z;
    cin >> a >> b >> c >> x >> y >> z;
    cout << max({a, b, c, x, y, z}) << endl;

    cin >> a >> b >> c >> x >> y >> z;
    cout << min({a, b, c, x, y, z}) << endl;

    double k;
    cin >> k;
    cout << round(k) << endl;

    return 0;
}