#include <bits/stdc++.h>
#define f(n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m; j++)
#define f1(m) for(int j = 0; j < m; j++)
#define f11(n) for(int i = 0; i < n; i++)
using namespace std;

int main(){
    int n, m, k = INT_MIN;
    cin >> n >> m;
    int a[n][m];
    f(n, m) cin >> a[i][j];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            k = max(a[j][i], k);
        }
        cout << k << " "; k = INT_MIN;
    }
    cout << endl;
    int s = 1;
    f(n, m) cin >> a[i][j];
    cin >> k;
    if(k <= m){
        f11(n) s *= a[i][k - 1];
    }
    cout << s << endl;
    f(n, m) cin >> a[i][j];
    cin >> k;
    if(k <= m){
        f11(n) cout << a[i][k - 1] << " ";
    }
    cout << endl;
}
