#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << ((islower(s[s.size() - 2]) && islower(s[s.size() - 1])) ? "PDP\n" : "ACADEMY\n");

    cin >> s;
    cout << ((!isdigit(s[0]) && !isdigit(s[s.size() - 1])) ? "PDP\n" : "ACADEMY\n");

    cin >> s;
    cout << ((isupper(s[s.size() - 2]) && isupper(s[s.size() - 1])) ? "PDP\n" : "ACADEMY\n");

    return 0;
}
