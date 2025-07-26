#include <bits/stdc++.h>
using namespace std;

string fun1(string s){
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i])) s[i] = '*';
    }
    return s;
}
string fun2(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'x') s[i] = 'y';
        else if(s[i] == 'y') s[i] = 'z';
    }
    return s;
}

int main(){
    string s;

    cin >> s;
    cout << fun1(s) << endl;

    cin >> s;
    cout << fun2(s) << endl;

    return 0;
}
