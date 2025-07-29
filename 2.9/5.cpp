#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int x = s.find(' ');
    int y = s.find(' ', x + 1);
    if(y == -1) cout << "" << endl;
    else cout << s.substr(x + 1, y - x) << endl;
}