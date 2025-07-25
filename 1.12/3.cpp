#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k = 0;
    while(true){
        cin >> n;
        if(n) k++;
        else break;
    }
    cout << k << endl;
    k = 0;
    while(true){
        cin >> n;
        if(n){
            if(n > 10) k++;
        }
        else break;
    }
    cout << k << endl;
    return 0;
}