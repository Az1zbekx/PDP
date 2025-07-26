#include <bits/stdc++.h>
using namespace std;
int fun1(int n){
    if(n < 10) return 1;
    return 1 + fun1(n / 10);
}
int fun2(int a, int b){
    if(a > b) return 0;
    return a + fun2(a + 1, b);
}
int main(){
    int n;
    cin >> n;
    cout << fun1(n) << endl;

    int a, b;
    cin >> a >> b;
    cout << fun2(a, b) << endl;
}