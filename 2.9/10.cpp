#include <bits/stdc++.h>
using namespace std;
string zipZap(string s) {
    string k = "";
    k += s[0];
    for(int i = 1; i < s.size() - 1; i++){
        if((s[i - 1] == 'z' && s[i + 1] == 'p') || (s[i - 1] == 'p' && s[i + 1] == 'z')) continue;
        else k += s[i];
    }
    k += s[s.size() - 1];
    return k;
}
int main() {
    string s;
    cin >> s;
    cout << zipZap(s) << endl;
}
