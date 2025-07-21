#include <bits/stdc++.h>
using namespace std;
int main(){
	long double x, ans = 0;
	for(int i=0; i<8; i++){
		cin >> x;
		ans += x;
	
	}
	cout << ans / 8 << endl;
	
	long long a, b;
	cin >> a >> b;
	swap(a, b);
	cout << a << " " << b << endl;
	
	long long k;
	cin >> k;
	cout << k * 60;
	
	return 0; 
}