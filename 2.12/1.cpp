#include <bits/stdc++.h>
using namespace std;
int fun(string s){
    string k = "aeiuoAEIUO";
    int x = 0;
    for(char c : s){
        if(isalpha(c) && k.find(c) == -1){
            x++;
        }
    }
    return x;
}
int main(){
    string s;
    cin >> s;
    cout << fun(s) << endl;
}