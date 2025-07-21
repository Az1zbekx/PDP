#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cout << "2 xonali son kiriting: ";
    while(true){
        try {
            cin >> x;
            if(cin.fail()){
                cin.clear(); 
                cin.ignore(1000, '\n'); 
                throw runtime_error("Faqat 2 xonali butun son kiriting!");
            }

            if(x > 9 && x < 100){
                cout << "Birlar xonasidagi raqam " << x % 10 << endl;
                break;
            }else{
                cout << "Faqat 2 xonali butun son kiriting: ";
            }
        }catch(runtime_error &e){
            cout << "Xatolik: " << e.what() << endl;
            cout << "Qaytadan urinib ko'ring: ";
        }
    }
    
    cout << "3 xonali son kiriting: ";
    while(true){
    	try {
            cin >> x;
            if(cin.fail()){
                cin.clear(); 
                cin.ignore(1000, '\n'); 
                throw runtime_error("Faqat 3 xonali butun son kiriting!");
            }

            if(x > 99 && x < 1000){
                cout << "O'nlar xonasidagi raqam " << (x / 10) % 10 << endl;
                break;
            }else{
                cout << "Faqat 3 xonali butun son kiriting: ";
            }
        }catch(runtime_error &e){
            cout << "Xatolik: " << e.what() << endl;
            cout << "Qaytadan urinib ko'ring: ";
        }
    }
    
    cout << "3 xonali son kiriting: ";
    while(true){
    	try {
            cin >> x;
            if(cin.fail()){
                cin.clear(); 
                cin.ignore(1000, '\n'); 
                throw runtime_error("Faqat 3 xonali butun son kiriting!");
            }

            if(x > 99 && x < 1000){
                cout << "Yuzlar xonasidagi raqam " << x / 100 << endl;
                break;
            }else{
                cout << "Faqat 3 xonali butun son kiriting: ";
            }
        }catch(runtime_error &e){
            cout << "Xatolik: " << e.what() << endl;
            cout << "Qaytadan urinib ko'ring: ";
        }
    }
    
}
