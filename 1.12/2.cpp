#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k = 0;
    cin >> n;
    while(n){
        if((n % 10) % 2 == 0)k++;
        n /= 10;
    }
    cout << k << endl;

    cin >> n;
    k = 0;
    while(n){
        if((n % 10) % 2 == 1)k++;
        n /= 10;
    }
    cout << k << endl;
}