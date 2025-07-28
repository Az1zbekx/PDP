#include <bits/stdc++.h>
#define f(n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m; j++)
#define f1(m) for(int j = 0; j < m; j++)
#define f11(n) for(int i = 0; i < n; i++)
using namespace std;

int main(){
    int n, m, k = 0;
    cin >> n >> m;
    int a[n][m];
    f(n, m){
        cin >> a[i][j];
    }
    f11(n){
        k = 0;
        for(int j = 0; j < m; j++){
            if(a[i][j] % 2 == 1) k += a[i][j];
        }
        cout << k << ' ';
    }
    cout << endl;
    f(n, m){
        cin >> a[i][j];
    }
    f11(n){
        k = INT_MIN;
        for(int j = 0; j < m; j++){
            k = max(k, a[i][j]);
        }
        cout << k << ' ';
    }
    cout << endl;
    int s = 1;
    f(n, m){
        cin >> a[i][j];
    }
    cin >> k;
    if(k <= n){
        f1(m){
            s *= a[k - 1][j];
        }
    }
    cout << s << endl;

}
