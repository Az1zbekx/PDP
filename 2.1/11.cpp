#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.size() - 1; i++){
        s[i] = s[s.size() - 1];
    }
    cout << s << endl;

    cin >> s;
    int k = 0;
    for(int i = 0; i < s.size() && k < 5; i++){
        if(isdigit(s[i])){
            cout << s[i];
            k++;
        }
    }
    cout << endl;
    
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(isupper(s[i])) s[i] = tolower(s[i]);
    }
    cout << s << endl;
    return 0;
}
