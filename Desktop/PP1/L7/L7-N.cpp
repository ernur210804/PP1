#include <bits/stdc++.h>
using namespace std;
int rec(int n,int a[],int k,int i,bool b=false){
int f;
    if(i+1==n){
       
        return b;
    }
        f=abs(a[i]-a[i+1]);
        if(f<k){
            
            b=true;
            return b;
        }
    
    rec(n,a,k,i+1,b);

}
int main(){
    int n,k,i;
    cin>>n>>k;
    int a[n];
    int l=(sizeof(a)/sizeof(a[0]));
    bool b;
     for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+l);
   if(rec(n,a,k,0,b)==true){
    cout<<"cheater";
   }
   else{
    cout<<"no";
   }
}