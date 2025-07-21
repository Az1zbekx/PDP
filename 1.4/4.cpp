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

   
    x = input(1000, 9999, "4 xonali son kiriting: ");
    int a = x / 1000;              
    int b = (x / 100) % 10;     
    int c = (x / 10) % 10;       
    int d = x % 10;               
    cout << "Birlar va o'nlar xonasidagi raqamlar o'zaro almashdi: ";
    cout << a << b << d << c << endl;


    x = input(100, 999, "3 xonali son kiriting: ");
    int y = x / 100;              
    int z = (x / 10) % 10;         
    int w = x % 10;                
    cout << "Yuzlar va o'nlar xonasidagi raqamlar o'zaro almashdi: ";
    cout << z << y << w << endl;

    return 0;
}
