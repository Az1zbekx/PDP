#include <bits/stdc++.h>
using namespace std;
int main(){
	long long x;
	cin >> x;
	cout << x << " soat " << x * 3600 << " sekund" << endl;
	
	cin >> x;
	cout << x << " kun " << x * 24 * 60 << " minut" << endl;
	
	cin >> x;
	if(x < 60) cout << x << " minut soatga yetmaydi" << endl;
	else{
		if(x % 60 == 0) cout << x << " minut " << x / 60 << " soat" << endl;
		else cout << x << " minut " << x / 60 << " soat " << x % 60 << " minut" << endl;
	}
	
	cin >> x;
	if(x < (60 * 24)){
		cout << x << " minut kunga yetmaydi " << endl;
		if(x % 60 == 0) cout << x << " minut " << x / 60 << " soat" << endl;
		else cout << x << " minut " << x / 60 << " soat " << x % 60 << " minut" << endl;
	}else{
		if(x % (60 * 24) == 0) cout << x << " minut " << x / (24 * 60) << " kun" << endl;
		else{
			cout << x << " minut " << x / (24 * 60) << " kun ";
			x %= (60 * 24);
			if(x % 60 == 0) cout << x / 60 << " soat" << endl;
			else cout << x / 60 << " soat " << x % 60 << " minut" << endl;
		}
	}
	return 0; 
}