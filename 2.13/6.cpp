#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        k += a[i];
    }
    b[0] = k;
    for(int i = 1; i < n; i++){
        b[i] = b[i - 1] - a[i - 1];
    }
    for(int x : b){
        cout << x << " ";
    }
    cout << endl;
}