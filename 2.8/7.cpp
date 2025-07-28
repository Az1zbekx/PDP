#include <bits/stdc++.h>
using namespace std;
string middleThree(string s){
    int n = s.size() / 2;
    return string(1 , s[n - 1]) + s[n] + s[n + 1];
}
int main(){
    string s;
    cin >> s;
    cout << middleThree(s) << endl;
    return 0;
}