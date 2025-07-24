#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, cnt = 0;
    
    cin >> a;
    while(a){
        if((a % 10) % 2 == 0) cnt++;
        a /= 10;
    }
    cout << cnt << endl;
    cnt = 0;
    
    for(int i=0; i<5; i++){
        cin >> a;
        if(a % 2 == 0) cnt++;
    }
    cout << cnt << endl;
    cnt = 0;

    for(int i=0; i<5; i++){
        cin >> a;
        if(a > 0) cnt++;
    }
    cout << cnt << endl;
    
}