#include <bits/stdc++.h>
using namespace std;
int fun1(int n){
    int k = 0;
    while(n){
        k++;
        n /= 10;
    }
    return k;
}
int fun2(int a, int b){
    int k = 0;
    for(int i = a; i <= b; i++){
        if(i % 2 == 1) k++;
    }
    return k;
}
int fun3(int n){
    if(n < 2) return 0;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int main(){
    int n;
    cin >> n;
    cout << fun1(n) << endl;

    int a, b;
    cin >> a >> b;
    cout << fun2(a, b) << endl;

    cin >> n;
    cout << ((fun3(n)) ? "tub\n" : "tub emas\n");
}