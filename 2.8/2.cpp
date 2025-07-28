#include <bits/stdc++.h>
using namespace std;
string makeABBA(string a, string b){
    return a + b + b + a;
}
int main(){
    string a, b;
    cin >> a >> b;
    cout << makeABBA(a, b) << endl;
    return 0;
}