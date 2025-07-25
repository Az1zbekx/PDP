#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k = 0;
    cin >> n;
    while(n){
        k++;
        n /= 10;
    }
    cout << k << endl;

    cin >> n;
    k = 0;
    while(n){
        k += n % 10;
        n /= 10;
    }
    cout << k << endl;
}