#include <bits/stdc++.h>
using namespace std;
void fun(int n){
    int x = n + 3;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++) cout << "  ";
        for(int j = 0; j < n - i; j++) cout << x - j << " ";
        cout << endl;
    }
    
}
int main(){
    int n;
    cin >> n;
    fun(n);
}