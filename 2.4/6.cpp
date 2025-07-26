#include <bits/stdc++.h>
using namespace std;
int max1(int a, int b){
    if(a >= b) return a;
    return b;
}
int abs1(int n){
    if(n < 0) return n * -1;
    else return n;
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << max1(a, b) << endl;
    int n;
    cin >> n;
    cout << abs1(n) << endl;
}