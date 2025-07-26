#include <bits/stdc++.h>
using namespace std;
void fun1(int n){
    for(int i = 30; i <= 60; i++){
        cout << n * i << " ";
    }
    cout << endl;
}
void fun2(){
    for(int i = 10; i <= 99; i++){
        if(((i % 10) + (i / 10)) > 8) cout << i << " ";
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    fun1(n);
    fun2();
}