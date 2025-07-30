#include <bits/stdc++.h>
using namespace std;
string fun(string s, int n){
    if(s.size() < n) return "";
    return s.substr(s.size() - n);
}
int main(){
    string s;
    int n;
    cin >> s >> n;
    cout << fun(s, n) << endl;
}