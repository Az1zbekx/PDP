#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(a[0] % 2 == 0 && a[1] % 2 == 0 && a[a.size() - 1] % 2 == 1 && a[a.size() - 2] % 2 == 1){
        cout << "true\n";
    }else{
        cout << "false\n";
    }
    vector<int> b(n);
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    cout << *min_element(b.begin(), b.end()) << endl;
    vector<int> c(n);
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    cout << *min_element(b.begin(), b.end()) + *max_element(b.begin(), b.end()) << endl;
    return 0;
}