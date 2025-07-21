#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a, b;
	cin >> a >> b;
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	if(b != 0){
		if(a % b == 0) cout << a << " / " << b << " = " << a / b << endl;
		else cout << a << " / " << b << " = " << a / b  << " qoldiq " << a % b << endl;
	}else{
		cout << "Sonni 0 ga bo'lib bo'lmaydi";
	}
	return 0;
}