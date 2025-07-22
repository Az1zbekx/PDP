#include <bits/stdc++.h>
using namespace std;

long long input(string mes){
    long long val;
    cout << mes;
    while(true){
        try{
            cin >> val;
            if(cin.fail()){
                cin.clear();
                cin.ignore(1000, '\n');
                throw runtime_error("Faqat butun son kiriting!");
            }  
            return val;
        }catch(runtime_error &e){
            cout << "Xatolik: " << e.what() << endl;
            cout << "Qaytadan urinib ko‘ring: ";
        }
    }
}

int main(){
    long double Bayt = 720 * 50 * 152;
    cout << fixed << setprecision(2) << "MB = " << Bayt / (1024 * 1024) << endl;

    long long n = input("N = ");
    cout << "So'zlar = " << n / 2 << endl;
    return 0;
}