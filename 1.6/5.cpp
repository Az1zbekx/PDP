#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;

    cin >> n;
    cout << ((n % 10) + (n / 10) > 10) << endl;
    
    cin >> n;
    cout << ((n % 10) * (n / 10) > 20) << endl;

    cin >> n;
    cout << ((n % 10) % 2 == 1 && (n / 10) % 2 == 1) << endl;
}