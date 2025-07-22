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
    long long p = input("Patrik = ");
    long long j = input("Julia = ");
    if(p <= j) cout << "Patrikning puli ko'proq edi :)" << endl;
    else{
        cout << "Javob = " << ((long double)(p - j) / 2) << endl;
    }

    long long km = input("Kilometr = ");
    long long m = input("Metr =  ");
    long long dm = (km * 1000 + m) * 10;
    cout << "Dm = " << dm << endl;
    return 0;
}

