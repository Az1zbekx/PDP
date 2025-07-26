#include <bits/stdc++.h>
using namespace std;
bool isdigit1(char c){
    if(c >= '0' && c <= '9') return true;
    else return false; 
}
bool islower1(char c){
    if(c >= 'a' && c <= 'z') return true;
    else return false;
}
int main(){
    char c;
    cin >> c;
    cout << isdigit1(c) << endl;

    cin >> c;
    cout << islower1(c) << endl;
}