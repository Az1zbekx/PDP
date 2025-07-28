#include <bits/stdc++.h>
using namespace std;
string conCat(string a, string b){
    if(a[a.size() - 1] == b[0]) return a + b.substr(1);
    else return a + b;
}
int main(){
    string a, b;
    cin >> a >> b;
    cout << conCat(a, b) << endl;
    return 0;
}