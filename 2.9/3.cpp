#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    string s1, s2, s3 = "";
    cin >> c >> s1 >> s2;
    for(char ch : s1){
        if(ch == c) s3 += s2;
        s3 += ch;
    }
    cout << s3 << endl;
}