#include <bits/stdc++.h>
using namespace std;
string extraEnd(string s){
    string a = s.substr(s.size() - 2);
    return a + a + a;
}
int main(){
    string s;
    cin >> s;
    cout << extraEnd(s) << endl;
    return 0;
}