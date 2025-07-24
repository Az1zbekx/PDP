#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, cnt = 0, sum = 0;

    for(int i=0; i<5; i++){
        cin >> a;
        if(a > 0){
            cnt++;
            sum += a;
        }
    }
    cout << cnt << " " << sum << endl;
    cnt = 0;

    for(int i=0; i<5; i++){
        cin >> a;
        if(a >= 10 && a <=99){
            cnt++;
        }
    }
    cout << cnt << endl;

}