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
    int ans = 1;
    while(x){
        ans *= (x % 10);
        x /= 10;
    }
    cout << "Raqamlar ko'paytmasi: " << ans << endl;

    x = input(10, 99, "2 xonali son kiriting: ");
    ans = 1;
    while(x){
        ans *= (x % 10);
        x /= 10;
    }
    cout << "Raqamlar ko'paytmasi: " << ans << endl;

    x = input(10000, 99999, "5 xonali son kiriting: ");
    ans = 1;
    while(x){
        ans *= (x % 10);
        x /= 10;
    }
    cout << "Raqamlar ko'paytmasi: " << ans << endl;

    x = input(100, 999, "3 xonali son kiriting: ");
    cout << "Teskari ko'rinishi: " << x % 10 << (x / 10) % 10 << x / 100 << endl;
    return 0;
}
