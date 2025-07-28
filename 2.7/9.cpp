#include <bits/stdc++.h>
using namespace std;
string canBalance(vector<int> a){
    int k = accumulate(a.begin(), a.end(), 0), s = 0;
    for(int i = 0; i < a.size(); i++){
        s += a[i];
        if(s == k - s) return "true";
    }
    return "false";
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << canBalance(a) << endl;
}
