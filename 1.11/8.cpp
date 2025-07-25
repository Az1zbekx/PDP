#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, k = 0;
    cin >> a;
    for(int i = 1; i <= a; i++){
        if(a % i == 0) cout << i << " ";
    }
    cout << endl;

    cin >> a;
    for(int i = 1; i <= a; i++){
        if(a % i == 0) k++;
    }
    cout << k << endl;

    k = 0;
    cin >> a;
    for(int i = 1; i <= a; i++){
        if(a % i == 0) k += i;
    }
    cout << k << endl;
    return 0;
}
