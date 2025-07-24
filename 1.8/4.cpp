#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    char c;
    
    cin >> a >> c >> b;
    if(c == '+') cout << a + b << endl;
    else if(c == '-') cout << a - b << endl;
    else if(c == '*') cout << a * b << endl;
    else if(c == '/' && b != 0) cout << a / b << endl;
    else if(c == '%' && b != 0) cout << a % b << endl;
    else cout << "Xatolik: noto'g'ri amal yoki 0 ga bo'lish." << endl;

    int n, x, y, z;
    cin >> n;
    if(n >= 100 && n <= 999){
        z = n % 10;
        y = (n / 10) % 10;
        x = n / 100;
        if(x < y && y < z) cout << "o'suvchi" << endl;
        else if(x > y && y > z) cout << "kamayuvchi" << endl;
        else cout << "na o'suvchi, na kamayuvchi" << endl;
    }
    else cout << "3 xonali son kiriting" << endl;

    return 0;
}
