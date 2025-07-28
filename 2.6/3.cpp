#include <bits/stdc++.h>
#define f(n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m; j++)
#define f1(m) for(int j = 0; j < m; j++)
#define f11(n) for(int i = 0; i < n; i++)
using namespace std;

int main(){
    int n, m, x, y, mn = INT_MAX;
    cin >> n >> m;
    int a[n][m];
    f(n, m){
        cin >> a[i][j];
        if(a[i][j] < mn){
            mn = a[i][j];
            x = i;
            y = j;
        }
    }
    cout << x << " " << y << endl;

    f(n, m) cin >> a[i][j];
    f11(n){
        mn = 0;
        f1(m) mn += a[i][j];
        cout << mn << " ";
    }
    cout << endl;

    f(n, m) cin >> a[i][j];

    f11(n){
        mn = 0;
        f1(m) if(a[i][j] % 2 == 1) mn++;
        cout << mn << " ";
    }
    cout << endl;
}
