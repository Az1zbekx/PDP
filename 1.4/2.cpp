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

    x = input(10000, 99999, "5 xonali son kiriting: ");
    cout << "Minglar xonasidagi raqam: " << (x / 1000) % 10 << endl;

    x = input(1000, 9999, "4 xonali son kiriting: ");
    cout << "Yuzlar xonasidagi raqam: " << (x / 10) % 10 << endl;

    x = input(100, 999, "3 xonali son kiriting: ");
    cout << "Raqamlar yig'indisi: " << (x % 10) + (x / 10) % 10 + (x / 100) << endl;

    return 0;
}
