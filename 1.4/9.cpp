#include <bits/stdc++.h>
using namespace std;

int input(int min, int max, string mes) {
    int x;
    cout << mes;
    while (true) {
        try {
            cin >> x;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                throw runtime_error("Faqat butun son kiriting!");
            }
            if (x >= min && x <= max) return x;
            else cout << "Faqat " << to_string(min).length() << " xonali son kiriting: ";
        } catch (runtime_error &e) {
            cout << "Xatolik: " << e.what() << endl;
            cout << "Qaytadan urinib ko‘ring: ";
        }
    }
}

int main() {
    int x;

   
    x = input(100, 999, "3 xonali son kiriting: ");             
    int a = (x / 100) % 10;     
    int b = (x / 10) % 10;       
    int c = x % 10;               
    cout << "Aytilgan shart bo'yicha o'zgardi: ";
    cout << c << a << b << endl;

    return 0;
}
