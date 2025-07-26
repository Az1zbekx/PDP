#include <bits/stdc++.h>
using namespace std;
int pow1(int n, int k){
    int t = 1;
    for(int i = 0; i <= k; i++){
        t *= n;
    }
    return t;
}
char tolower1(char c){
    if(c >= 'a' && c <= 'z') return c;
    else return char(c + 32);
}
int main(){
    char c;
    cin >> c;
    cout << tolower1(c) << endl;

    int n;
    cin >> n;
    cout << pow1(n, 2) << endl;
}