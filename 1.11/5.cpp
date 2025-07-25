#include <bits/stdc++.h>
using namespace std;
int fun(int n){
    int k = 0;
    while(n){
        k += n % 10;
        n /= 10;
    }
    return k;
}
int main(){
    for(int i = 100; i < 1000; i++){
        if(fun(i) > 18) cout << i << " ";
    }
    cout << endl;

    for(int i = 100; i < 1000; i++){
        if(i / 100 == i % 10) cout << i << " ";
    }
    cout << endl;
    return 0;
}
