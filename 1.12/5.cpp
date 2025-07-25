#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k = 0;
    while(true){
        cin >> n;
        if(n){
            if(n > 50) k += n;
        }
        else break;
    }
    cout << k << endl;
    k = 0;
    while(true){
        cin >> n;
        if(n % 2 == 1) k++;
        else break;
    }
    cout << k << endl;
    return 0;
}