#include <bits/stdc++.h>
using namespace std;
bool endOther(string a, string b) {
    for(int i = 0; i < a.size(); i++) a[i] = tolower(a[i]);
    for(int i = 0; i < b.size(); i++) b[i] = tolower(b[i]);
    if (a.size() >= b.size()) return a.substr(a.size() - b.size()) == b;
    else return b.substr(b.size() - a.size()) == a;
}
int main() {
    string a, b;
    cin >> a >> b;
    cout << (endOther(a, b) ? "true\n" : "false\n");
    return 0;
}
