#include <bits/stdc++.h>
using namespace std;
void rec(int n,int m,int l,int q){
    
    if(n==1){
        cout<<m;
        return;
    }
    if(n==2){
        cout<<l;
        return;
    }
    q=m+l;
    rec(n-1,l,q,q);
      
}
int main(){
    int n,q,l=1;
    cin>>n;
    int m=0;
    rec(n,m,l,q);
}