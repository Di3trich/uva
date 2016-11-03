#include <bits/stdc++.h>
using namespace std;

int f(int n){
    int sum = 0;
    while( n ){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(){

    int n;

    while( cin >> n && n != 0 ){
        while( n > 9 ){
            n = f(n);
        }
        cout << n << endl;
    }

    return 0;
}
