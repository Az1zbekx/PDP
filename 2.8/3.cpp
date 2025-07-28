#include <bits/stdc++.h>
using namespace std;
string makeOutWord(string a, string b){
    return a.insert(2, b);
}
int main(){
    string a, b;
    cin >> a >> b;
    cout << makeOutWord(a, b) << endl;
    return 0;
}