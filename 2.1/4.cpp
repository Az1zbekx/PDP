#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    swap(s[s.size() - 2], s[s.size() - 1]);
    cout << s << endl;

    cin >> s;
    cout << ((isalpha(s[0])) ? "PDP\n" : "ACADEMY\n");

    cin >> s;
    cout << ((isdigit(s[0])) ? "PDP\n" : "ACADEMY\n");

    return 0;
}
