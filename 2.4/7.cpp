#include <bits/stdc++.h>
using namespace std;
bool isupper1(char c){
    if(c >= 'A' && c <= 'Z') return true;
    else return false; 
}
char toUpper1(char c){
    if(c >= 'A' && c <= 'Z') return c;
    else return char(c - 32);
}
int main(){
    char c;
    cin >> c;
    cout << isupper1(c) << endl;

    cin >> c;
    cout << toUpper1(c) << endl;
}