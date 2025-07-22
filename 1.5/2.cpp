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
    long long a = input("Butun son kiriting: ");
    long long res = a;
    res = res * res;    
    res = res * res;    
    res = res * res;    
    cout << a << " ning 8 - darajasi: " << res << endl;

    long long soat = input("Soatni butun son ko'rinishida kiriting: ");
    long long kun = input("Kunni butun son ko'rinishida kiriting: ");
    long long jami = kun * 24 + soat;
    cout << kun << " kun " << soat << " soat jami = " << jami << " soat" << endl;

    return 0;
}
