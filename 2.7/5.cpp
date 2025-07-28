#include <bits/stdc++.h>
using namespace std;
string only14(vector<int> a){
    for(int i = 0; i < a.size(); i++){
        if(a[i] != 1 && a[i] != 4) return "false";
    }
    return "true";
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << only14(a) << endl;
}
