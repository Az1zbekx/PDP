#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool b = false;
    while(n){
        if(n % 10 == 5) b = true;
        n /= 10;
    }
    if(b) cout << "YES\n";
    else cout << "NO\n";
    b = false;

    cin >> n;
    while(n){
        if((n % 10) % 2 == 0) b = true;
        n /= 10;
    }
    if(b) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}