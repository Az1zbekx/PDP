#include <bits/stdc++.h>
#define f(n) for(int i = 0; i < n; i++)
using namespace std;
int main(){
    int n, k = 0, s = 0;
    cin >> n;
    vector<int> a(n);
    f(n){
        cin >> a[i];
    }
    s = a[a.size() - 1];
    f(n){
        if(a[i] > s) k += a[i];
    }
    cout << k << endl;
    k = 1;
    vector<int> b(n);
    f(n){
        cin >> b[i];
        if(b[i] % 3 == 0 || b[i] % 4 == 0) k = 1;
        else{
            k = 0;
            break;
        }
    }
    if(k) cout << "hello\n";
    else cout << "salom\n";
}