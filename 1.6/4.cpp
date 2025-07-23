#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    
    cin >> n >> m;
    cout << (n >= 10 && n <= 99 && m >= 10 && m <=99 && n % 2 == 1 && m % 2 == 1) << endl;

    cin >> n;
    cout << (n >= 10 && n <= 99 && n / 10 == n % 10) << endl;
}