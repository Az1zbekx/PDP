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
    long long a = input("a = ");
    long long b = input("b = ");
    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << " " << b << endl;

    long long A = input("A = ");
    long long B = input("B = ");
    long long C = input("C = ");
    A = A + B + C;
    B = A - (B + C);  
    C = A - (B + C);  
    A = A - (B + C);
    cout << A << " " << B << " " << C << endl;
    return 0;
}