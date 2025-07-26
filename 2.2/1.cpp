#include <bits/stdc++.h>
using namespace std;
int fun1(int a, int b){
    return a + b;
}
int fun2(string s){
    int k = 0;
    for(char c : s) if(isdigit(c)) k++;
    return k;
}
int fun3(string s){
    int k = 0;
    for(char c : s) if(isupper(c)) k++;
    return k;
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << fun1(a, b) << endl;

    string s;
    cin >> s;
    cout << fun2(s) << endl;

    cin >> s;
    cout << fun3(s) << endl;
}