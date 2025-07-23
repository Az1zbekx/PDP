#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    
    cin >> n;
    cout << (n >= 1000 && n <= 9999) << endl;

    cin >> n;
    cout << (n % 2 == 0 && n >= 10 && n <= 99) << endl;

    cin >> n;
    cout << (n % 2 == 1 && n >= 100 && n <= 999) << endl;

}