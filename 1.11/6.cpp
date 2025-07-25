#include <bits/stdc++.h>
using namespace std;
int fun(int n){
    int k = 1;
    while(n){
        k *= n % 10;
        n /= 10;
    }
    return k;
}
int main(){
    int k = 0, s = 0;
    for(int i = 10; i < 100; i++){
        if(fun(i) > 15){
            k++;
            s += i;
        }
    }
    cout << k << " " << s << endl;

    for(int i = 100; i < 1000; i++){
        if((i / 10) % 10 == 4 || (i / 10) % 10 == 7) cout << i << " ";
    }
    cout << endl;
    return 0;
}
