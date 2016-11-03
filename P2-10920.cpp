#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int sz, p;
	
	while(cin >> sz >> p && sz!=0 && p!=0){
		int l = 1, up = 0;
		while( p > l*4-4 ){
			p -= l*4-4;
			l+=2;
		}
		l-=3;
		int f = sz/2+l+1, c = sz/2+1;
		while( p-- ){
			
		}
	}
	
	return 0;
}
