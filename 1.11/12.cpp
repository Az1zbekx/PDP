#include <bits/stdc++.h>
using namespace std;

int main(){
    double x;
    cin >> x;
    for(double i = 1.1; i <= 2.0 ; i += 0.1) cout << fixed << setprecision(2) << i * x << " ";
    cout << endl;

    int n;
    cin >> n;
    for(int i = 0; i <= n; i++) cout << fixed << setprecision(2) << sqrt(i) << " ";
    cout << endl;
    
    return 0;
}
