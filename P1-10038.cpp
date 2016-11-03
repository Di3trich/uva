#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, a, b;
    
    while(cin >> n){
        bool mark[n]={}, res=true;
        cin>>a;
        for(int i=0; i < n-1; i++){
            cin >> b;
            int dif = abs(a-b);
            if(dif >= n || dif == 0 || mark[abs(a-b)]){
                res = false;
            }else{
                mark[abs(a-b)] = true;
            }
            a = b;
        }
        if(res){
            cout<<"Jolly"<<endl;
        }else{
            cout<<"Not jolly"<<endl;
        }
    }

    return 0;
}
