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
    long long a = input("Son = ");
    long long a2 = a * a;        
    long long a3 = a2 * a;       
    long long a5 = a2 * a3;      
    long long a10 = a5 * a5;     
    long long a15 = a10 * a5;    
    cout << a << " ^ 15 = " << a15 << endl;
    return 0; 
}

