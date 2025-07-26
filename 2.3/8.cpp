#include <bits/stdc++.h>
using namespace std;
void fun1(){
    for(int i = 1; i <= 100; i += 2){
        cout << i << " ";
    }
    cout << endl;
}
void fun2(int n){
    for(int i = 1; i <= n; i++){
        cout << sqrt(i) << " ";
    }
    cout << endl;
}
int main(){
    fun1();
    int n;
    cin >> n;
    fun2(n);
}