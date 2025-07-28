#include <bits/stdc++.h>
using namespace std;
string either24(vector<int> a){
    int k = 0, l = 0;
    for(int i = 1; i < a.size(); i++){
        if(a[i] == 2 && a[i - 1] == 2) k = 1;
        else if(a[i] == 4 && a[i - 1] == 4) l = 1;
    }
    if(k && l) return "false";
    else return "true";
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << either24(a) << endl;
}
