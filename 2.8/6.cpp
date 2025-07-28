#include <bits/stdc++.h>
using namespace std;
string nTwice(string s, int n){
    return s.substr(0, n) + s.substr(s.size() - n);
}
int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    cout << nTwice(s, n) << endl;
    return 0;
}