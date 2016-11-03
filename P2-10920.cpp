#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int l;
    long long p;
    
    while( cin >> l >> p, l && p ){
        long long ld = ceill(sqrtl(p));
        if( ld%2 == 0 ) ld++;
        p -= (ld-2) * (ld-2);
        
        int f = (l+1)/2 + ld/2, c = (l+1)/2 + ld/2;
        
        if( p <= ld-1 ) c -= p, p = 0;
        else c -= ld-1, p -= ld-1;
        
        if( p <= ld-1 ) f -= p, p = 0;
        else f -= ld-1, p -= ld-1;
        
        if( p <= ld-1 ) c += p, p = 0;
        else c += ld-1, p -= ld-1;
        
        if( p <= ld-1 ) f += p, p = 0;
        else f += ld-1, p -= ld-1;
        
        cout << "Line = " << f << ", column = " << c << "." << endl;
    }
    
    return 0;
}
