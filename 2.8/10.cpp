#include <bits/stdc++.h>
using namespace std;
string deFront(string s){
    string a = "";
    if(s[0] == 'a') a += 'a';
    if(s[1] == 'b') a += 'b';
    a += s.substr(2);
    return a;
}
int main(){
    string s;
    cin >> s;
    cout << deFront(s) << endl;
    return 0;
}