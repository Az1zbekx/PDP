#include <bits/stdc++.h>
using namespace std;
bool fun(int n){
    if(n < 2) return false;
    for(int i  = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n), b;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(fun(a[i])) b.push_back(a[i]);
    }
    sort(b.begin(), b.end());
    for(int x : b){
        cout << x << " ";
    }
    cout << endl;
}