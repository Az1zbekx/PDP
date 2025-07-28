#include <bits/stdc++.h>
using namespace std;
string isEverywhere(vector<int> a, int k){
    for(int i = 1; i < a.size(); i++){
        if(a[i] != k && a[i - 1] != k) return "false";
    }
    return "true";
}
int main(){
    int n, k;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;
    cout << isEverywhere(a, k) << endl;
}
