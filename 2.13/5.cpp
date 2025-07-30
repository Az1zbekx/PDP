#include <bits/stdc++.h>
using namespace std;
string fun(string s){
    string m = "", k;
    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 1){
            m += s[i];
        }
    }
    k = m;
    reverse(k.begin(), k.end());
    if(m == k) return "PDP";
    else return "ACADEMY";
}
int main(){
    string s;
    cin >> s;
    cout << fun(s) << endl;
}