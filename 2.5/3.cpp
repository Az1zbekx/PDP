#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k = 0, s = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n >= 3) cout << a[0] + a[1] + a[2] << endl;
    vector<int> b(n);
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    if(n >= 3) cout << b[b.size() - 1] + b[b.size() - 2] + b[b.size() - 3] << endl;
    vector<int> c(n);
    for(int i = 0; i < n; i++){
        cin >> c[i];
        if(c[i] % 2 == 0) s++;
        else k++;
    } 
    cout << (k > s ? "true\n" : "false\n");
    return 0;
}