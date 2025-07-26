#include <bits/stdc++.h>
using namespace std;

bool fun1(string s){
    for(char c : s){
        if(!isupper(c)) return false;
    }
    return true;
}
bool fun2(string s){
    for(char c : s){
        if(!islower(c)) return false;
    }
    return true;
}

int main(){
    string s;

    cin >> s;
    cout << (fun1(s) ? "true\n" : "false\n");

    cin >> s;
    cout << (fun2(s) ? "true\n" : "false\n");

    return 0;
}
