#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    
    cin >> a >> b;
    cout << max(a, b) << endl;

    cin >> a >> b;
    cout << min(a, b) << endl;

    cin >> a >> b;
    if(a >= 10 && a <= 99 && b >= 10 && b <= 99) cout << a + b << endl;
    else cout << a * b << endl;
    
}