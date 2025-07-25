#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k = 0;
    cin >> s;
    for(char c : s) if(islower(c) || isdigit(c)) k++;
    cout << k << endl;

    k = 0;
    cin >> s;
    for(char c : s) if(isupper(c) || isdigit(c)) k++;
    cout << k << endl;

    k = 0;
    int a = 0, b = 0, j = 0;
    cin >> s;
    for(char c : s){
        if(isdigit(c)) a++;
        else if(islower(c)) b++;
        else if(isupper(c)) j++;
        else if(!isalnum(c)) k++;
    }
    cout << a << " " << b << " " << j << " " << k << endl;
    return 0;
}
