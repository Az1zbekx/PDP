#include <bits/stdc++.h>
using namespace std;
bool fun(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n * m);
    for(int i = 0; i < a.size(); i++){
        cin >> a[i];
    }
    int x = *min_element(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++){
        if(fun(a[i])) a[i] += x;
    }
    for(int k : a){
        cout << k << " ";
    }
    cout << endl;
}