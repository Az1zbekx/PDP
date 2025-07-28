#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > 99 && a[i] < 1000) k++;
    }
    cout << k << endl;
    k = 0;
    vector<int> b(n);
    for(int i = 0; i < n; i++){
        cin >> b[i];
        if(b[i] % 2 == 0) k++;
    }
    cout << k << endl;
    k = 0;
    vector<int> c(n);
    for(int i = 0; i < n; i++){
        cin >> c[i];
        if(c[i] % 2 == 1) k += c[i];
    }
    cout << k << endl;
    return 0;
}