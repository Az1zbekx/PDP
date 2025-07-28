#include <bits/stdc++.h>
#define f(n) for(int i = 0; i < n; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    f(n) cin >> a[i];
    f(n) cin >> b[i];
    f(n) c[i] = a[i] * b[i];
    f(n) cout << c[i] << " ";
    cout << endl;
    string k[n];
    int x = 0;
    f(n){
        cin >> k[i];
        if(k[i][0] == '$') x++;
    }
    cout << x << endl;

    string s[n];
    f(n){
        cin >> s[i];
        x = 1;
        for(char y : s[i]){
            if(!isupper(y)){
                x = 0;
                break;
            }
        }
        if(x) cout << s[i] << endl;
    }

}
