#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int k = 0;
    for(int i = 0; i < s.size(); i++){
        if(!isalnum(s[i]) && k != 2){
            cout << s[i] << " ";
            k++;
        }
    }
    cout << endl;
}