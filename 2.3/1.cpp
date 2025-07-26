#include <bits/stdc++.h>
using namespace std;
void fun1(int a, int b, int c, int d, int e){
    cout << max({a, b, c, d ,e}) << endl;
    cout << min({a, b, c, d ,e}) << endl;
}
void fun2(int a, int b, int c, int d, int e){
    cout << a * b * c * d * e << endl;
    cout << a + b + c + d + e << endl;
}
int main(){
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    fun1(a, b, c, d, e);
    cin >> a >> b >> c >> d >> e;
    fun2(a, b, c, d, e);
}