#include <bits/stdc++.h>
#define f(n) for(int i = 0; i < n; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    f(n) cin >> a[i];
    f(n){
        cin >> b[i];
        c[i] = max(a[i], b[i]);
    }
    f(n) cout << c[i] << " ";
    cout << endl;

    int A[n];
    vector<int> B;
    f(n){
        cin >> A[i];
        if(A[i] % 2 == 0){
            B.push_back(A[i]);
        }
    }
    for(int x : B) cout << x << " ";
    cout << endl;
}
