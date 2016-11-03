#include <bits/stdc++.h>
using namespace std;

int rev(int n){
	int r = 0;
	while( n ){
		r = r*10 + n%10;
		n /= 10;
	}
	return r;
}

int main(){

	int c, n;
	
	while( c-- ){
		cin >> n;
		int ite = 0;
		while( n > 9 ){
			n = f(n);
			ite++;
		}
		cout << ite << ' ' << n << endl;
	}

	return 0;
}
