#include <bits/stdc++.h>
using namespace std;

int fun(int x){
    int k = 0;
    for(int i = 1; i <= x; i++){
        if(x % i == 0) k++;
    }
    return k;
}

int main(){
    int a, b;
    cin >> a >> b;
    if(fun(a) > fun(b)) cout << "a ning bo'luvchilari ko'p\n";
    else if(fun(a) < fun(b)) cout << "b ning bo'luvchilari ko'p\n";
    else cout << "bo'luvchilari teng\n";

    int k = 0;
    cin >> a >> b;
    for(int i = a + 1; i < b; i++) k += i;
    cout << k << endl;

    return 0;
}
