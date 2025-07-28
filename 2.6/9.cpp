#include <bits/stdc++.h>
#define f(n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m; j++)
#define f1(m) for(int j = 0; j < m; j++)
#define f11(n) for(int i = 0; i < n; i++)
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m;
    int a[n][m];
    f(n, m) cin >> a[i][j];
    cin >> k;
    f11(n){
        cout << a[i][k - 1] * 2 << " ";
    }
    cout << endl;
    f(n, m) cin >> a[i][j];
    cin >> k;
    f1(m){
        cout << a[k - 1][j] * 3 << endl;
    }
    cout << endl;
    f(n, m) cin >> a[i][j];
    cin >> k;
    f11(n){
        cout << a[i][k - 1] + 20 << " ";
    }
    cout << endl;
}
