#include <bits/stdc++.h>
using namespace std;
bool fun(int n){
    if(n < 2) return false;
    int i = 2;
    while(i * i <= n){
        if(n % i == 0) return false;
        i++;
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

