#include <bits/stdc++.h>
using namespace std;
string firstLast6(vector<int> a){
    if(a.front() == 6 || a.back() == 6) return "true";
    else return "false";
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << firstLast6(a) << endl;
}
