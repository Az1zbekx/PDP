#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    long long s = 1;
    for(int i = 0; i < k; i++) s *= n;
    cout << s << endl;
    
    return 0;
}
