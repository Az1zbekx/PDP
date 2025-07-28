#include <bits/stdc++.h>
using namespace std;
vector<int> reverse3(vector<int> a){
    reverse(a.begin(), a.end());
    return a;
}
int main(){
    vector<int> a(3);
    for(int i = 0; i < 3; i++) cin >> a[i];
    a = reverse3(a);
    for(int i = 0; i < 3; i++) cout << a[i] << " ";
    cout << endl;
}
