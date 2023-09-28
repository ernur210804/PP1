#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,l,n2;
    cin>>n>>m>>l;
    n2=sqrt(n);
    if((n2*n2)!=n){
        n2=n2+1;
    }
    for(int i=n2;i<=sqrt(m);i++){
        if(l>0){
            cout<<i*i<<" ";
        }
        if(l<0){
           for(int i=sqrt(m);i>=n2;--i){ 
            cout<<i*i<<" ";
           }
           return 0;
        }
    }
}