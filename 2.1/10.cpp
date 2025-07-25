#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) 
        if(isdigit(s[i])) s[i] = '9';
    cout << s << endl;
    cin >> s;
    for(int i = 0; i < s.size(); i++) 
        if(islower(s[i])) s[i] = '*';
    cout << s << endl;

    cin >> s;
    for(int i = 0; i < s.size(); i++) 
        if(!isalnum(s[i])) s[i] = s[0];
    cout << s << endl;
    return 0;
}
