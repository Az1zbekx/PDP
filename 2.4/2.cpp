#include <bits/stdc++.h>
using namespace std;
void calculate(int a, int b){
    cout << a + b << endl;
}
void calculate(int a, int b, int c){
    cout << a * b * c << endl;
}
void getAmountDigit(int n){
    int k = 0;
    while(n){
        k++;
        n /= 10;
    }
    cout << k << endl;
}
void getAmountDigit(string s){
    int k = 0;
    for(char c : s){
        if(isdigit(c)) k++;
    }
    cout << k << endl;
}
int main(){
    int a, b, c;
    cin >> a >> b;
    calculate(a, b);
    cin >> a >> b >> c;
    calculate(a, b, c);
    int n;
    cin >> n;
    getAmountDigit(n);
    string s;
    cin >> s;
    getAmountDigit(s);
}