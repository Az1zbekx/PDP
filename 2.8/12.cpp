#include <bits/stdc++.h>
using namespace std;
string fun(string s){
    s.erase(remove(s.begin(), s.end(), '@'), s.end());
    return s;
}
int main(){
    string s;
    cin >> s;
    cout << fun(s) << endl;
    return 0;
}