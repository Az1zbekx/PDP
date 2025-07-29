#include <bits/stdc++.h>
using namespace std;
bool catDog(string s) {
    int c = 0, d = 0;
    for (int i = 0; i <= s.size() - 3; i++) {
        if (s.substr(i, 3) == "cat") c++;
        if (s.substr(i, 3) == "dog") d++;
    }
    return c == d;
}
int main() {
    string s;
    cin >> s;
    cout << (catDog(s) ? "true" : "false") << endl;
    return 0;
}