#include <bits/stdc++.h>
using namespace std;
string helloName(string Name){
    return "Hello " + Name + "!";
}
int main(){
    string Name;
    cin >> Name;
    cout << helloName(Name) << endl;
    return 0;
}