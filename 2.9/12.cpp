#include <bits/stdc++.h>
using namespace std;
string withoutString(string a, string b) {
    if(a.find(b) == -1) return a;
    int x = a.find(b);
    return a.substr(0, x) + a.substr(x + b.size());
}
int main() {
    string str, word;
    cin >> str >> word;
    cout << withoutString(str, word) << endl;
    return 0;
}

