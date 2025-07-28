#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k = 0, s = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 3 == 0 && a[i] % 7 == 0) k++;
    }
    cout <<  k << endl;
    k = 0;
    vector<int> b(n);
    for(int i = 0; i < n; i++){
        cin >> b[i];
        if(b[i] >= 10 && b[i] <= 99 && b[i] % 2 == 1){
            k++;
            s += b[i];
        }
    }
    cout << k << " " << s << endl;
    vector<int> c(n);
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    swap(c[0], c[c.size() - 1]);
    for(int x : c){
        cout << x << " ";
    }
    cout << endl;
}