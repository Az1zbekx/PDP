#include <bits/stdc++.h>
using namespace std;
int fun(int x){
    int k = 0;
    while(x){
        k += x % 10;
        x /= 10;
    }
    return k;
}
int main(){
    int i = 100;
    while(i <= 999){
        if(fun(i) > 20) cout << i << " ";
        i++;
    }
    cout << endl;

    i = 100;
    while(i <= 999){
        if(i / 100 == i % 10) cout << i << " ";
        i++;
    }
    cout << endl;
    return 0;
}

