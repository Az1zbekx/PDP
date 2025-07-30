#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, m = "";
    getline(cin, s);
    vector<string> a;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            a.push_back(m);
            m = "";
        }else if(i == s.size() - 1){
            m += s[i];
            a.push_back(m);
            m = "";
        }else{
            m += s[i];
        }
    }
    int mx = a[0].size();
    for(string k : a){
        int x = k.size();
        mx = max(mx, x);
    }
    cout << mx << endl;
}