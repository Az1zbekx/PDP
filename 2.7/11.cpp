#include <bits/stdc++.h>
using namespace std;
vector<int> squareUp(int n){
    vector<int> a(n * n);
    for(int i = 1; i <= n; i++)
        for(int j = 0; j < i; j++)
            a[i * n - j - 1] = j + 1;
    return a;
}

int main(){
    int n;
    cin >> n;
    vector<int> a = squareUp(n);
    for(int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;
}
