#include <bits/stdc++.h>
#define f(n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m; j++)
#define f1(m) for(int j = 0; j < m; j++)
#define f11(n) for(int i = 0; i < n; i++)
using namespace std;

int main(){
    int n, m, k = 0;
    cin >> n >> m;
    int a[n][m];
    f(n, m) cin >> a[i][j];
    for(int i = 0; i < n; i++){
        int b = 1;
        for(int j = 0; j < m; j++){
            if(a[i][j] % 2 == 0){
                b = 0;
                break;
            }
        }
        if(b){
            k++;
        }
    }
    cout << k << endl; k = 0;
    f(n, m) cin >> a[i][j];
    for(int i = 0; i < n; i++){
        int b = 1;
        for(int j = 0; j < m; j++){
            if(a[j][i] % 2 == 1){
                b = 0;
                break;
            }
        }
        if(b) k++;
    }
    cout << k << endl; k = 0;
    f(n, m) cin >> a[i][j];
    for(int i = 0; i < n; i++){
        int b = 1;
        for(int j = 0; j < m; j++){
            if(a[j][i] % 2 == 0){
                b = 0;
                break;
            }
        }
        if(b) k++;
    }
    cout  << k << endl;
}
