#include <bits/stdc++.h>
using namespace std;
void fun1(int a, int b){
    if(a > b) swap(a, b);
    for(int i = a; i <= b; i++){
        if(i % 5 == 0 || i % 6 == 0) cout << i << " ";
    }
    cout << endl;
}
void fun2(string s){
    for(char c : s){
        if(isupper(c)) cout << c << " ";
    }
    cout << endl;
}
void fun3(string s){
    for(char c : s){
        if(isalpha(c)) cout << c << " ";
    }
    cout << endl;
}
int main(){
    int a, b;
    cin >> a >> b;
    fun1(a, b);
    string s;
    cin >> s;
    fun2(s);
    cin >> s;
    fun3(s);
}