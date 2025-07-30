#include <bits/stdc++.h>
using namespace std;
string fun(string s){
    int x = s.rfind("qiyin");
    if(x == -1) return "PDP";
    else return s.substr(0, x) + s.substr(x + 5);
}
int main(){
    string s;
    getline(cin, s);
    cout << fun(s) << endl;
}