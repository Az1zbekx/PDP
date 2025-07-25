#include <bits/stdc++.h>
using namespace std;
int main(){
    int i = 3, n;
    while(i <= 60){
        cout << i * 7000 << endl;
        i++;
    }
    cout << endl;

    cin >> n;
    if(n < 23){
        int k = 0;
        i = n;
        while(i <= 23) {
            if(i % 3 != 0){
                cout << i << " ";
                k++;
            }
            i++;
        }
        cout << endl << k << endl;
    }else{
        int k = 0;
        i = 23;
        while(i <= n) {
            if(i % 3 != 0){
                cout << i << " ";
                k++;
            }
            i++;
        }
        cout << endl << k << endl;
    }
    return 0;
}

