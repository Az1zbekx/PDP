#include <bits/stdc++.h>
using namespace std;
int fun(int x){
    int k = 1;
    while(x){
        k *= x % 10;
        x /= 10;
    }
    return k;
}
int main(){
    int i = 10, s = 0, k = 0;
    while(i <= 99){
        if(fun(i) > 12){
            s += i;
            k++;
        }
        i++;
    }
    cout << k << " " << s << endl;

    i = 100;
    while(i <= 999){
        if((i / 10) % 10 == 2 || (i / 10) % 10 == 5) cout << i << " ";
        i++;
    }
    cout << endl;
    return 0;
}

