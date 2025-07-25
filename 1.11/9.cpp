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
    int a, b;
    cin >> a;
    cout << (fun(a) ? "true" : "false") << endl;

    cin >> a >> b;
    cout << (fun(a) && fun(b) ? a + b : a * b) << endl;

    return 0;
}
