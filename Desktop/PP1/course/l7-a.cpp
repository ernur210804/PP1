#include <bits/stdc++.h>
using namespace std;
int a=1;
void rec(int n,int a){
    
    if(n==0){ 
        cout<<a;
        return;
    }
   
    rec(n-1,a*2);

}
int main(){
int n;
cin>>n;
rec(n,a);

}