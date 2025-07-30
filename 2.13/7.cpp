#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int x = 0, y = 0;
    for(char c : s){
        if(isalpha(c)) x++;
        else if(isdigit(c)) y++;
    }
    if(x > y) cout << "harf\n";
    else if(x < y) cout << "raqam\n";
    else cout << "teng\n";
}