#include <bits/stdc++.h>
#define f(n) for(int i = 0; i < n; i++)
using namespace std;

int main(){
    int n, k = 0;
    cin >> n;
    vector<int> a(n);
    f(n){
        cin >> a[i];
        k += a[i];
    }
    cout << k << endl;
    int x, y;
    vector<int> b(n);
    f(n){
        cin >> b[i];
    }
    k = b[0] + b[1];
    x = b[0], y = b[1];
    for(int i = 2; i < n; i++){
        if(b[i] + b[i - 1] > k){
            k = b[i] + b[i - 1];
            x = b[i - 1], y = b[i];
        }
    }
    cout << x << " " << y << endl;
    k = 0;
    vector<int> c(n);
    f(n) cin >> c[i];
    for(int i = 1; i < n; i++){
        if(c[i] > c[i - 1]) k++;
    } 
    cout << k << endl;

}
