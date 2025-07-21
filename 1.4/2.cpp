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

    x = input(10, 99, "2 xonali son kiriting: ");
    cout << "Birlar xonasidagi raqam: " << x % 10 << endl;

    x = input(100, 999, "3 xonali son kiriting: ");
    cout << "O'nlar xonasidagi raqam: " << (x / 10) % 10 << endl;

    x = input(100, 999, "Yana 3 xonali son kiriting: ");
    cout << "Yuzlar xonasidagi raqam: " << x / 100 << endl;

    return 0;
}
