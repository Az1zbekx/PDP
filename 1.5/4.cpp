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
    long long bayt = input("Fayl hajmini kiriting: ");
    long long KB = bayt / 1024;
    long long q = bayt % 1024;
    if(q) cout << "Fayli hajmi =  " << KB << "KB " << q << " Bayt" << endl;
    else cout << "Fayli hajmi =  " << KB << "KB" << endl;

    long long GB = (long long)(1.8 * 1024 * 1024);
    if(GB % 750) cout << "1.8 GB axborotni " << GB / 750 + 1 << " sekunda uzatish mumkin" << endl;
    else cout << "1.8 GB axborotni " << GB / 750 << " sekunda uzatish mumkin" << endl;
    return 0;
}