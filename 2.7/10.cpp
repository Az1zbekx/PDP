#include <bits/stdc++.h>
using namespace std;

string linearIn(vector<int> a, vector<int> b){
    for(int i = 0; i < b.size(); i++){
        if(find(a.begin(), a.end(), b[i]) == a.end()){
            return "false";
        }
    }
    return "true";
}

int main(){
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; i++) cin >> b[i];
    cout << linearIn(a, b) << endl;
}
