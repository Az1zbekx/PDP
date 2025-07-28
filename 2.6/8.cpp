#include <bits/stdc++.h>
#define f(n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m; j++)
#define f1(m) for(int j = 0; j < m; j++)
#define f11(n) for(int i = 0; i < n; i++)
using namespace std;

int main(){
    int n, m, k, s = 0, x = 1;
    cin >> n >> m;
    int a[n][m];
    f(n, m) cin >> a[i][j];
    for(int i = 0; i < n; i += 2){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    f(n, m) cin >> a[i][j];
    for(int i = 0; i < n; i++){
        for(int j = 1; j < m; j += 2){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    f(n, m) cin >> a[i][j];
    cin >> k;
    f11(n){
        s += a[i][k - 1];
        x *= a[i][k - 1];
    }
    cout << s << " " << x << endl;
}
