#include <bits/stdc++.h>
using namespace std;
vector<int> seriesUp(int n){
    vector<int> a;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= i; j++)
            a.push_back(j);
    return a;
}

int main(){
    int n;
    cin >> n;
    vector<int> a = seriesUp(n);
    for(int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;
}
