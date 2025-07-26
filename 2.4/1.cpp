#include <bits/stdc++.h>
using namespace std;
float Add(float a, float b){
    return a + b;
}
float Add(float a, float b, float c){
    return a + b + c;
}
string Add(string a, string b){
    return a + b;
}
void repeat(int a, int b){
    for(int i = 0; i < b; i++) cout << a << " ";
    cout << endl;
}
void repeat(int a){
    for(int i = 0; i < a; i++) cout << a << " ";
    cout << endl;
}
int main(){
    float a, b, c;
    cin >> a >> b;
    cout << Add(a, b) << endl;
    cin >> a >> b >> c;
    cout << Add(a, b, c) << endl;
    string n, m;
    cin >> n >> m;
    cout << Add(n, m) << endl;
    int x, y;
    cin >> x >> y;
    repeat(x, y);
    cin >> x;
    repeat(x);
}