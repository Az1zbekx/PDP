#include <bits/stdc++.h>
#define f(n) for(int i = 0; i < n; i++)
using namespace std;
int main(){
    int n, k = 0, s = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] >= 10 && a[i] <= 99){
            a[i] += 100;
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    vector<int> b(n);
    f(n){
        cin >> b[i];
        if(b[i] > 0) k++;
        else if(b[i] < 0) s++;
    }
    cout << k << " " << s << endl;
    vector<int> c(n);
    k = 0;
    f(n){
        cin >> c[i];
    }
    s = c[0];
    f(n){
        if(c[i] < s) k++;
    }
    cout << k << endl;
}