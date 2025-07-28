#include <bits/stdc++.h>
#define f(n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m; j++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    f(n, m) cin >> a[i][j];
    for(int i = 0; i < m; i++){
        int k = INT_MAX;
        for(int j = 0; j < n; j++){
            k = min(k, a[j][i]);
        }
        cout << k << " ";
    }
    cout << endl;

    f(n, m) cin >> a[i][j];
    for(int i = 0; i < n; i++){
        int k = INT_MAX;
        for(int j = 0; j < m; j++){
            k = min(k, a[i][j]);
        }
        cout << k << " ";
    }
    cout << endl;

    f(n, m) cin >> a[i][j];
    int k = 0;
    for(int i = 0; i < n; i++){
        bool b = true;
        for(int j = 0; j < m; j++){
            if(a[i][j] % 2 == 1){
                b = false;
                break;
            }
        }
        if(b) k++;
    }
    cout << k << endl;
}
