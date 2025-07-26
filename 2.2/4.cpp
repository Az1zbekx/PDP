#include <bits/stdc++.h>
using namespace std;

string fun1(string s){
    reverse(s.begin(), s.end());
    return s;
}
bool fun2(string s){
    string k = s;
    reverse(k.begin(), k.end());
    return s == k;
}
bool fun3(string s){
    for(char c : s){
        if(!isdigit(c)) return false;
    }
    return true;
}

int main(){
    string s;

    cin >> s;
    cout << fun1(s) << endl;

    cin >> s;
    cout << (fun2(s) ? "true\n" : "false\n");

    cin >> s;
    cout << (fun3(s) ? "true\n" : "false\n");

    return 0;
}
