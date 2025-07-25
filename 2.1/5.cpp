#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << ((isupper(s[0]) && isupper(s[1])) ? "PDP\n" : "ACADEMY\n");

    cin >> s;
    cout << ((isdigit(s[0]) && isdigit(s[1])) ? "PDP\n" : "ACADEMY\n");

    cin >> s;
    cout << ((isdigit(s[0]) && isdigit(s[s.size() - 1])) ? "PDP\n" : "ACADEMY\n");

    return 0;
}
