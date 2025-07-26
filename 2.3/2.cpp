#include <bits/stdc++.h>
using namespace std;
void fun1(int n){
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << endl;
}
void fun2(int n){
    for(int i = 1; i <= n; i++){
        if(n % i == 0) cout << i << " ";
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    fun1(n);
    cin >> n;
    fun2(n);
}