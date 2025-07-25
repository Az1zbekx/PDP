#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, k = 0;
    cin >> a >> b;
    while(a <= b){
        if(a % 8 == 0) k += 1;
        a += 1;
    }
    cout  << k << endl;

    cin >> a >> b;
    while(b >= a){
        if(b % 9 == 0 || b % 5 == 0) cout << b << " ";
        b -= 1;
    }
    cout << endl;

    int i = 1;
    k = 0;
    while(i <= 100){
        k += i;
        i += 2;
    }
    cout << k << endl;
    return 0;
}

