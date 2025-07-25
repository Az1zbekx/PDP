#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v1 = {"bir", "ikki", "uch", "to'rt", "besh", "olti", "yetti", "sakkiz", "to'qqiz"};
    vector<string> v2 = {"o'n", "yigirma", "o'ttiz", "qirq", "ellik", "oltmish", "yetmish", "sakson", "to'qson"};

    string ans = "";
    if(n >= 100) {
        ans += v1[(n / 100) - 1] + " yuz";
        n %= 100;
        if(n > 0) ans += " ";
    }
    if(n >= 10) {
        ans += v2[(n / 10) - 1];
        n %= 10;
        if(n > 0) ans += " ";
    }
    if(n > 0) ans += v1[n - 1];

    cout << ans << endl;
    return 0;
}
