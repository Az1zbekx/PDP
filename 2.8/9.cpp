#include <bits/stdc++.h>
using namespace std;
string minCat(string a, string b){
    if(a.size() > b.size()) return a.substr(a.size() - b.size()) + b;
    else if(a.size() < b.size()) return a + b.substr(b.size() - a.size());
    else return a + b;
}
int main(){
    string a, b;
    cin >> a >> b;
    cout << minCat(a, b) << endl;
    return 0;
}