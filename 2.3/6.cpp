#include <bits/stdc++.h>
using namespace std;
void fun1(){
    for(int i = 100; i <= 999; i++){
        if((i % 10) % 2 == 1 && (i / 10) % 2 == 1) cout << i << " ";
    }
    cout << endl;
}
void fun2(){
    for(int i = 100; i <= 999; i++){
        if((i % 10) % 2 == 1 &&(i / 100) % 2 == 1 && ((i / 10) % 10) % 2 == 1) cout << i << " ";
    }
    cout << endl;
}
int main(){
    fun1();
    fun2();
}