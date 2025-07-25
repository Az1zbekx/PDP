#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k = 0;
    cin >> s;
    for(char c : s) if(isupper(c)) k++;
    cout << k << endl;

    k = 0;
    cin >> s;
    for(char c : s) if(islower(c)) k++;
    cout << k << endl;

    k = 0;
    cin >> s;
    for(char c : s) if(!isalnum(c)) k++;
    cout << k << endl;
    return 0;
}
