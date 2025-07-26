#include <bits/stdc++.h>
using namespace std;
void findMax(int a, int b, int c){
    cout << max({a, b, c}) << endl;
}
void findMax(int a, int b, int c, int d){
    cout << max({a, b, c, d}) << endl;
}
void findMax(int a, int b, int c, int d, int e){
    cout << max({a, b, c,d ,e}) << endl;
}
void multiplication(int a){
    long long k = 1;
    for(int i = 1; i <= a; i++){
        k *= i;
    }
    cout << k << endl;
}
void multiplication(int a, int b){
    int k = 1;
    for(int i = a; i <= b; i++){
        k *= i;
    }
    cout << k << endl;
}
void multiplication(int a, int b, int c){
    cout << a * b * c << endl;
}
int main(){
    int a, b, c, d, e;
    cin >> a >> b >> c;
    findMax(a, b, c);
    cin >> a >> b >> c >> d;
    findMax(a, b, c, d);
    cin >> a >> b >> c >> d >> e;
    findMax(a, b, c, d, e);

    cin >> a;
    multiplication(a);
    cin >> a >> b;
    multiplication(a, b);
    cin >> a >> b >> c;
    multiplication(a, b, c);
}