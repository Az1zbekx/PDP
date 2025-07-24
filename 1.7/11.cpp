#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, ans;
    cin >> a;
    ans = a;
    for(int i=0; i<5; i++){
        cin >> a;
        ans = max(ans, a);
    }
    cout << ans << endl;

}