#include <bits/stdc++.h>
using namespace std;
string withoutX(string s){
    string a = "";
    if(s[0] != 'x') a += s[0];
    a += s.substr(1, s.size() - 2);
    if(s[s.size() - 1] != 'x') a += s[s.size() - 1];
    return a;
}
int main(){
    string s;
    cin >> s;
    cout << withoutX(s) << endl;
    return 0;
}