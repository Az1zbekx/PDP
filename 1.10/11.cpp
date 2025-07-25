#include <bits/stdc++.h>
using namespace std;
int fun(int x){
    int i = 1, k = 0;
    while(i <= x){
        if(x % i == 0) k++;
        i++;
    }
    return k;
}
int main(){
    int a, b;
    cin >> a >> b;
    if(fun(a) > fun(b)) cout << "a ning bo'luvchilari ko'p\n";
    else if(fun(a) < fun(b)) cout << "b ning bo'luvchilari ko'p\n";
    else cout << "bo'luvchilari teng\n";

    cin >> a >> b;
    int k = 0;
    a++;
    while(a < b){
        k += a;
        a++;
    }
    cout << k << endl;
    return 0;
}

