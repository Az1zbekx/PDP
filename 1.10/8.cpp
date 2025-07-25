#include <bits/stdc++.h>
using namespace std;
int main(){
    int i = 1, k = 0, a;
    cin >> a;
    while(i <= a){
        if(a % i == 0) cout << i << " ";
        i++;
    }
    cout << endl;

    cin >> a;
    i = 1;
    while(i <= a){
        if(a % i == 0) k++;
        i++;
    }
    cout << k << endl;

    cin >> a;
    k = 0;
    i = 1;
    while(i <= a){
        if(a % i == 0) k += i;
        i++;
    }
    cout << k << endl;
    return 0;
}

