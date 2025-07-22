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
    long long hafta = input("Hafta ni butun son ko'rinishida kiriting: ");
    long long soat = input("Soat ni butun son ko'rinishida kiriting: ");
    long long jami = hafta * 7 + soat / 24;
    if(soat % 24 == 0){
        cout << "Jami = " << jami << " kun" << endl;
    }else{
        cout << "Jami = " << jami << " kun " << soat % 24 << " soat" << endl;
    }

    long long minut = input("Minutni butun son ko'rinishida kiriting: ");
    long long soat2 = input("Soat ni butun son ko'rinishida kiriting: ");
    jami = minut * 60 + soat2 * 3600;
    cout << "Jami = " << jami << " sekund" << endl;
    return 0;
}