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
    int s = 0;
    if(k <= n){
        f1(m){
            if(a[k - 1][j] % 2 == 0) s++;
        }
    }
    cout << s << endl; s = 0;
    f(n, m) cin >> a[i][j];
    cin >> k;
    if(k <= n){
        f1(m){
            if(a[k - 1][j] % 2 == 1) s += a[k - 1][j];
        }
    }
    cout << s << endl; s = 0;

    f(n, m) cin >> a[i][j];
    f11(n){
        if(a[i][m - 1] % 2 == 0) s += a[i][m - 1];
    }
    cout << s << endl;
}
