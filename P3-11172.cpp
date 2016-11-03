#include <bits/stdc++.h>
using namespace std;

int main(){
    int c, a, b;
    cin >> c;

    while( c-- ){
        cin >> a >> b;
        if(a < b){
            cout << "<" << endl;
        }else if(a > b){
            cout << ">" << endl;
        }else{
            cout << "=" <<endl;
        }
    }

    return 0;
}
