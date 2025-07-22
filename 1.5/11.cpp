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
    long long a = input("Soat = ");
    long long b = input("Minut = ");
    long long c = input("Sekund = ");
    long long q = c % 60;
    cout << "Jami = " << (a * 60 +  b + c / 60) << " minut";
    if(q) cout << " " << q << " sekund";
    cout << endl;
    return 0; 
}

