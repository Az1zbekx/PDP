#include <bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n > 46){
        for(int i = 46; i <= n; i++){
            if(i % 3 == 0){
                cout << i << " ";
            }
        }
    }else{
        for(int i = 46; i >= n; i--){
            if(i % 3 == 0){
                cout << i << " ";
            }
        }
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    fun(n);
}