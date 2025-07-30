#include <bits/stdc++.h>
using namespace std;
int main(){
    double s, k, p;
    cin >> s >> p;
    int i = 0;
    k = s;
    while(s * 2 > k){
        k += k * (p / 100);
        i++;
    }
    cout << "Hosil bo'lgan summa : " << fixed << setprecision(2) << k << endl;
    cout << "Oy : " << i << endl;
    
}