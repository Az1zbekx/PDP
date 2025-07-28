#include <bits/stdc++.h>
#define f(n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m; j++)
using namespace std;
int main(){
    int n, m, k = 0;
    cin >> n >> m;
    int a[n][m];
    f(n, m){
        cin >> a[i][j];
        if(a[i][j] % 2 == 1) k++;
    }
    cout << k << endl; k = 0;
    f(n, m){
        cin >> a[i][j];
        if(a[i][j] % 2 == 0) k++;
    }
    cout << k << endl; k = 0;
    f(n, m){
        cin >> a[i][j];
        k += a[i][j];
    }
    cout << k << endl;
}