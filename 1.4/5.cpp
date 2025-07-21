#include <bits/stdc++.h>
using namespace std;


int input1(int min, int max, string mes) {
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


long long input2(string mes) {
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
            return GB * 1024;
        } catch (runtime_error &e) {
            cout << "Xatolik: " << e.what() << endl;
            cout << "Qaytadan urinib ko‘ring: ";
        }
    }
}

int main() {
    
    int x = input1(1000, 9999, "4 xonali son kiriting: ");
    int a = x / 1000;              
    int b = (x / 100) % 10;        
    int c = (x / 10) % 10;         
    int d = x % 10;                
    cout << "Minglar va o'nlar xonasidagi raqamlar o'zaro almashdi: ";
    cout << c << b << a << d << endl;

   
    long long GB = input2("GB ni kiriting: ");
    cout << "Natija: " << GB << " MB" << endl;

    return 0;
}
