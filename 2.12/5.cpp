#include <bits/stdc++.h>
using namespace std;
string fun(string s){
    string m = "";
    for(char c : s){
        if(isdigit(c)) m += "raqam";
        else if(isupper(c)) m += "katta";
        else if(islower(c)) m += "kichik";
    }
    return m;
}
int main(){
    string s;
    cin >> s;
    cout << fun(s) << endl;
}