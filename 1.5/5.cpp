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
    long long dol = input("Dollor = ");
    long long yev = input("Yevro = ");
    long long som = dol * 12600 + yev * 14500;
    cout << "Som = " << som << endl;

    long long a = input("Son = ");
    long long res = a * a;
    res = res * res * a;
    res = res * res;
    cout << a << " ^ 10 = " << res << endl;
    return 0;
}