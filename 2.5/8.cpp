#include <bits/stdc++.h>
#define f(n) for(int i = 0; i < n; i++)
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n), A(n);
    f(n){
        cin >> a[i];
        A[i] = a[i];
    }
    sort(A.begin(), A.end());
    if(a == A) cout << "true\n";
    else cout << "false\n";

    vector<int> b(n), B(n);
    f(n){
        cin >> b[i];
        B[i] = b[i];
    }
    sort(B.rbegin(), B.rend());
    if(b == B) cout << "true\n";
    else cout << "false\n";

    vector<int> c(n);
    f(n) cin >> c[i];
    swap(*max_element(c.begin(), c.end()), *min_element(c.begin(), c.end()));
    f(n) cout << c[i] << " ";
    cout << endl;
}
