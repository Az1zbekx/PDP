#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k = 0;
    while(true){
        cin >> n;
        if(n) k += n;
        else break;
    }
    cout << k << endl;
    k = 1;
    while(true){
        cin >> n;
        if(n) k *= n;
        else break;
    }
    cout << k << endl;
    return 0;
}