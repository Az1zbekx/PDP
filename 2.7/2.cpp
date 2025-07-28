#include <bits/stdc++.h>
using namespace std;
string commonEnd(vector<int> a, vector<int> b){
    if(a.front() == b.front() || a.back() == b.back()) return "true";
    else return "false";
}
int main(){
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; i++) cin >> b[i];
    cout << commonEnd(a, b) << endl;
}
