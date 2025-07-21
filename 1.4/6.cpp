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
    
    long long GB = input("GB ni kiriting: ");
    cout << "Natija: " << GB * 1024LL * 1024 * 1024 * 8 << " Bit" << endl;

    GB = input("GB ni kiriting: ");

    if(GB % 1024 == 0) cout << "Natija: " << GB / 1024 << " TB" << endl;
    else cout << "Natija: " << GB / 1024 << " TB " << GB % 1024 << " GB" << endl;

    GB = input("Fleshkani hajmini kiriting: ");
    cout << "Ushbu fleshkaga 2 GB kinodan " << GB / 2 << " ta sig'adi" << endl;

    return 0;
}
