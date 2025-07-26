#include <bits/stdc++.h>
using namespace std;
void fun1(int n){
    for(int i = 0; i < n; i++){
        cout << n << " ";
    }
    cout << endl;
}
void fun2(string s){
    for(char c : s){
        if(!isalpha(c)) cout << c << " ";
    }
    cout << endl;
}
int main(){
    string s;
    cin >> s;
    fun2(s);
    int n;
    cin >> n;
    fun1(n);
}