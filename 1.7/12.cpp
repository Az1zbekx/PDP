#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d, ans;
    cin >> a >> b >> c >> d;

    //cout << min({a, b, c, d}) << endl;

    ans = a;
    if(b < ans) ans = b;
    if(c < ans) ans = c;
    if(d < ans) ans = d;

    cout << ans << endl;

}