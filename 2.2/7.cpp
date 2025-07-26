#include <bits/stdc++.h>
using namespace std;

string fun1(string s){
    for(int i = 0; i < s.size(); i++){
        if(isupper(s[i])) s[i] = tolower(s[i]);
    }
    return s;
}

string fun2(string s){
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i])) s[i] = toupper(s[i]);
    }
    return s;
}

int fun3(string s){
    int k = 0;
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == 'o' && s[i + 1] == 'k') k++;
    }
    return k;
}

int main(){
    string s;
    cin >> s;
    cout << fun1(s) << endl;

    cin >> s;
    cout << fun2(s) << endl;

    cin >> s;
    cout << fun3(s) << endl;

    return 0;
}
