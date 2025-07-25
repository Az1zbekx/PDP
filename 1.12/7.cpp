#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i = 1;
    cin >> n;
    while(true){
        if(i == n){
            cout << "3 ning darajasi\n";
            break;
        }else if(i > n){
            cout << "3 ning darajasi emas\n";
            break;
        }
        i *= 3;
    }
    return 0;
}