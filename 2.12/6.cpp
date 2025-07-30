#include <bits/stdc++.h>
using namespace std;
string fun(string s){
    string m = "", k = "";
    for(int i = 0; i <= s.size(); i++){
        if(i <= s.size() - 3 && s[i] == 'c' && s[i + 1] == '+' && s[i + 2] == '+'){
            m += "is c++ powerful?";
        }
        m += s[i];
    }
    return m;
}
int main(){
    string s;
    cin >> s;
    cout << fun(s) << endl;
}