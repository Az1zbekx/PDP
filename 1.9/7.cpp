#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    char c;
    cin >> a >> b >> c;

    switch(c) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            if(b != 0)
                cout << a / b << endl;
            else
                cout << "0 ga bo'lish mumkin emas!\n";
            break;
        default:
            cout << "Error\n";
    }
    return 0;
}
