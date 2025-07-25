#include <bits/stdc++.h>
using namespace std;
bool fun(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    for(int i = 0; i < 100; i++){
        if(fun(i)) cout << i << " ";
    }
    cout << endl;

    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(fun(i)) cout << i << " ";
    }
    cout << endl;
    return 0;
}