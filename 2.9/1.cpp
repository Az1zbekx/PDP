#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    int n, m;
    cin >> a >> n >> b >> m;
    cout << a.substr(0, n) + b.substr(b.size() - m) << endl;

}