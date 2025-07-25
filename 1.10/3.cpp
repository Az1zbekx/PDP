#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    while(a <= b){
        if(a % 5 == 0) cout << a << " ";
        a += 1;
    }
    cout << endl;

    cin >> a >> b;
    while(a <= b){
        if(a % 4 == 0 && a % 7 == 0) cout << a << " ";
        a += 1;
    }
    cout << endl;
    return 0;
}

