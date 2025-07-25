#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i])) s[i] = toupper(s[i]);
    }
    cout << s << endl;

    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'x') s[i] = 'y';
        else if(s[i] == 'y') s[i] = 'z'; 
    }
    cout << s << endl;
    return 0;
}
