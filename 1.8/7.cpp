#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if(s == "qizil") cout << "harakatlanishdan to'xtang\n";
    else if(s == "sariq") cout << "harakatlanishga tayyorlaning\n";
    else if(s == "yashil") cout << "harakatlanishni davom ettiring\n";
    else cout << "Error\n";

    int a, b, c;
    cin >> a >> b >> c;
    cout << min({a, b, c}) << " " << max({a, b, c});
    return 0;
}
