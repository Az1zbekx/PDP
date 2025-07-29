#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int c = 0;
    for(int i = 0; i <= s.size() - 4; i++){
        string k = s.substr(i, 4);
        if(k[0] == 'c' && k[1] == 'o' && k[3] == 'e') c++;
    }
    cout << c << endl;
    return 0;
}