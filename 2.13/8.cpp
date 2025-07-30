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
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(fun(arr[i])) arr[i] *= 2;
    }
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;
}