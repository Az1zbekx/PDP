#include <bits/stdc++.h>
using namespace std;
bool sameStarChar(string s) {
    for(int i = 1; i < s.size() - 1; i++){
        if(s[i] == '*' && s[i - 1] == s[i + 1]) return true;
    }
    return false;
}
int main() {
    string s;
    cin >> s;
    cout << (sameStarChar(s) ? "true\n" : "false\n");
}
