#include <bits/stdc++.h>
using namespace std;
char theEnd(string s, bool front){
    char c;
    if(front) c = s[0];
    else c = s[s.size() - 1];
    return c;
}
int main(){
    string s;
    cin >> s;
    bool front;
    cin >> front;
    cout << theEnd(s, front) << endl;
    return 0;
}