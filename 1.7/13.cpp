#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, ans;
    cin >> a;
    ans = a % 10;
    a /= 10;
    while(a){
        ans = max(ans, a % 10);
        a /= 10;
    }
    cout << ans << endl;
}