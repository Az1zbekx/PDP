#include <bits/stdc++.h>
using namespace std;
string wordEnds(string str, string word) {
    string res = "";
    int w = word.size();
    for (int i = 0; i <= str.size() - w; i++) {
        if (str.substr(i, w) == word) {
            if (i > 0) res += str[i - 1];
            if (i + w < str.size()) res += str[i + w];
        }
    }
    return res;
}
int main() {
    string str, word;
    cin >> str >> word;
    cout << wordEnds(str, word) << endl;
    return 0;
}