#include <bits/stdc++.h>
using namespace std;
string fun(string s){
    string k = "aeiuoAEIUO", m = "";
    for(char c : s){
        if(k.find(c) == -1) m += c;
    }
    return m;
}
int main(){
    string s;
    cin >> s;
    cout << fun(s) << endl;
}