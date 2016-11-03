#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int c, a, b;
	cin >> c;
	
	while( c-- ){
		cin >> a >> b;
		a = a/3;
		b = b/3;
		cout<< a*b << endl;
	}
	
	return 0;
}
