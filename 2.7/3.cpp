#include <bits/stdc++.h>
using namespace std;
vector<int> rotateLeft3(vector<int> a){
    return {a[1], a[2], a[0]};
}
int main(){
    vector<int> a(3);
    for(int i = 0; i < 3; i++) cin >> a[i];
    a = rotateLeft3(a);
    for(int i = 0; i < 3; i++) cout << a[i] << " ";
    cout << endl;
}
