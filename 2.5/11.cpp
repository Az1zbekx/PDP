#include <bits/stdc++.h>
#define f(n) for(int i = 0; i < n; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n;
    int a[n];
    f(n) cin >> a[i];
    f(n) {
        if(a[i] % 2 == 0){
            k = a[i];
            break;
        }
    }
    f(n) if(a[i] % 2 == 0) a[i] += k;
    f(n) cout << a[i] << " ";
    cout << endl;
    int b[n];
    f(n){
        cin >> b[i];
        if(b[i] % 2 == 1) k = b[i];
    }
    f(n) if(b[i] % 2 == 1) b[i] += k;
    f(n) cout << b[i] << " ";
    cout << endl;

    int mn = INT_MAX;
    int c[n];
    f(n) cin >> c[i];
    for(int i = 0; i < n; i += 2){
        mn = min(mn, c[i]);
    }
    cout << mn << endl;
}
