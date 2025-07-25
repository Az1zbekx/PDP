#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << ((isupper(s[0]) && islower(s[s.size() - 1])) ? "HARF\n" : "HARFEMAS\n");

    int cnt = 0;
    cin >> s;
    for(char c : s) if(isdigit(c)) cnt++;
    cout << cnt << endl;

    cnt = 0;
    cin >> s;
    for(char c : s) if(isalpha(c)) cnt++;
    cout << cnt << endl;
    
    return 0;
}
