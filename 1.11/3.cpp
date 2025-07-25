#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(i % 3 == 0) cout << i << " ";
    }
    cout << endl;

    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(i % 5 == 0 && i % 6 == 0) cout << i << " ";
    }
    cout << endl;

    return 0;
}