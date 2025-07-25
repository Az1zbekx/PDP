#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, k = 0;

    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(i % 10 == 0) k++;
    }
    cout << k << endl;

    
    cin >> a >> b;
    for(int i = b - 1; i > a; i--){
        if(i % 7 == 0 || i % 8 == 0) cout << i << " ";
    }
    cout << endl;

    
    k = 0;
    for(int i = 2; i <= 100; i += 2){
        k += i;
    }
    cout << k << endl;

    return 0;
}
