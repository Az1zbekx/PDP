#include <bits/stdc++.h>
using namespace std;

long long input(string mes){
    long long val;
    cout << mes;
    while(true){
        try{
            cin >> val;
            if(cin.fail() || val == 0){
                cin.clear();
                cin.ignore(1000, '\n');
                throw runtime_error("Faqat 0 dan farqli butun son kiriting!");
            }
            return val;
        }catch(runtime_error &e){
            cout << "Xatolik: " << e.what() << endl;
            cout << "Qaytadan urinib ko‘ring: ";
        }
    }
}

int main(){
    long long X = input("X = ");
    long long Y = input("Y = ");
    long long A = input("A = ");
    long long B = input("B = ");
    cout << "Javob = " << B / Y - A / X << endl;
    return 0;
}
