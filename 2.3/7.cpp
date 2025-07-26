#include <bits/stdc++.h>
using namespace std;
void fun1(){
    for(int i = 100; i <= 999; i++){
        int a = i / 100, b = (i / 10) % 10, c = i % 10;
        if(a + b + c > 20) cout << i << " ";
    }
    cout << endl;
}
void fun2(){
    for(int i = 100; i <= 999; i++){
        int a = i / 100, b = (i / 10) % 10, c = i % 10;
        if(a * b * c > 40) cout << i << " ";
    }
    cout << endl;
}
int main(){
    fun1();
    fun2();
}