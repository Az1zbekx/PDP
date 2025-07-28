#include <bits/stdc++.h>
using namespace std;
int matchup(vector<int> a, vector<int> b){
    int k = 0;
    for(int i = 0; i < a.size(); i++){
        if(abs(a[i] - b[i])  == 1 || abs(a[i] - b[i]) == 2) k++;
    }
    return k;
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    cout << matchup(a, b) << endl;
}
