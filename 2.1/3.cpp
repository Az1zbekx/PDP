#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cout << fixed << setprecision(2) << sqrt(i) << " ";
    cout << endl;

    string s;
    cin >> s;
    cout << s[s.size() - 1] << endl;

    cin >> s;
    cout << s[0] << s[1] << endl;

    return 0;
}
