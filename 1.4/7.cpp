#include <bits/stdc++.h>
using namespace std;

long long input(string mes) {
    long long GB;
    cout << mes;
    while (true) {
        try {
            cin >> GB;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                throw runtime_error("Faqat butun son kiriting!");
            }
            return GB;
        } catch (runtime_error &e) {
            cout << "Xatolik: " << e.what() << endl;
            cout << "Qaytadan urinib ko‘ring: ";
        }
    }
}

int main() {

    long long GB = input("Fleshkani hajmini kiriting: ");
    cout << "Ushbu fleshkaga 5 GB kinodan " << GB / 5 << " ta sig'adi" << endl;

    return 0;
}
