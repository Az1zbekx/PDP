#include <bits/stdc++.h>
#define f(n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m; j++)
#define f1(m) for(int i = 0; i < m; i++)
using namespace std;

int main(){
    int n, m, k = 0;
    cin >> n >> m;
    int a[n][m];

    f(n, m) cin >> a[i][j];

    f1(m) if(a[n - 1][i] % 2 == 0) k++;
    cout << k << endl;

    f(n, m) cin >> a[i][j];

    f1(m) cout << a[0][i] << " ";
    cout << endl;

    if(n > 2){
        f1(m) cout << a[2][i] << " ";
        cout << endl;
    }

    k = INT_MIN;
    f(n, m){
        cin >> a[i][j];
        k = max(k, a[i][j]);
    }
    cout << k << endl;
}
