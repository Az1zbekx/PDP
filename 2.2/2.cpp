#include <bits/stdc++.h>
using namespace std;
int fun1(string s){
    int k = 0;
    for(char c : s) if(islower(c)) k++;
    return k;
}
int fun2(string s){
    int k = 0;
    for(char c : s) if(isspace(c)) k++;
    return k;
}
int fun3(string s){
    int k = 0;
    for(char c : s) if(c == '@') k++;
    return k;
}
int main(){
    string s;
    cin >> s;
    cout << fun1(s) << endl;
    
    cin.ignore();
    getline(cin, s);
    cout << fun2(s) << endl;

    cin >> s;
    cout << fun3(s) << endl;
}