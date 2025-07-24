#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n == 0)
        cout << "nol soni" << endl;
    else if(n < 0) {
        if(n <= -100)
            cout << "uch xonali manfiy" << endl;
        else if(n <= -10)
            cout << "ikki xonali manfiy" << endl;
        else
            cout << "bir xonali manfiy" << endl;
    } else {
        if(n >= 100)
            cout << "uch xonali musbat son" << endl;
        else if(n >= 10)
            cout << "ikki xonali musbat son" << endl;
        else
            cout << "bir xonali musbat son" << endl;
    }

    int x;
    cin >> x;

    if(x >= 1000)
        cout << "to'rt xonali " << ((x % 2 == 0) ? "juft son" : "toq son") << endl;
    else if(x >= 100)
        cout << "uch xonali " << ((x % 2 == 0) ? "juft son" : "toq son") << endl;
    else if(x >= 10)
        cout << "ikki xonali " << ((x % 2 == 0) ? "juft son" : "toq son") << endl;
    else
        cout << "bir xonali " << ((x % 2 == 0) ? "juft son" : "toq son") << endl;

    return 0;
}
