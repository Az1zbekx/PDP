#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if(s == "Aziz20") cout << "Assalomu alaykum Azizbek, Xush kelibsiz\n";
    else cout << "Siz xato passwordni kiritidingiz\n";
    
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b && b == c) cout << "Natija 20\n";
    else if(a == b || a == c || b == c) cout << "Natija 10\n";
    else cout << "Natija 0\n";
}


