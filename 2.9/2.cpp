#include <bits/stdc++.h>
using namespace std;
int main(){
    string n, s = "";
    char c;
    cin >> n >> c;
    for(char k : n){
        s += k;
        if(k == c) s += k;
    }
    cout << s << endl;
}