#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0) a[i] *= 3;
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    vector<int> b(n);
    k = 1;
    for(int i = 0; i < n; i++){
        cin >> b[i];
        if(b[i] % 5 != 0) k = 0;
    }
    cout << (k ? "true\n" : "false\n");
    vector<int> c(n);
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    if(n >= 3 && c[0] >= 10 && c[0] <= 99 && c[1] >= 10 && c[1] <= 99 && c[2] >= 10 && c[2] <= 99){
        cout << "true\n";
    }else{
        cout << "false\n";
    }
}