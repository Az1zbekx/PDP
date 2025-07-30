#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    int x = a[0], mx = mp[a[0]];
    for(auto k : mp){
        if(k.second > mx){
            mx = k.second;
            x = k.first;
        }
    }
    cout << x << endl;
}