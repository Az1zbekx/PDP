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
                throw runtime_error("Faqat butun son kirting!");
            }  
            return val;
        }catch(runtime_error &e){
            cout << "Xatolik: " << e.what() << endl;
            cout << "Qaytadan urinib ko‘ring: ";
        }
    }
}

int main(){
    long long a = input("Butun son kirting: ");
    long long res = a;
    res = res * res;
    res = res * res;
    cout << a << " ning 4 - darajasi " << res << endl;
    
    long long b = input("Yana bir butun son kiriting: ");
    res = b;
    res = res * res;
    res = res * res * res;
    cout << b << " ning 6 - darajasi " << res << endl;
    return 0;
}