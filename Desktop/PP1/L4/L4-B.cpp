#include <iostream>
using namespace std;
int main(){
    int n,b,c,e;
    int i,j;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    b=a[0][0];
    c=a[0][0];
    
    
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(c>=a[i][j]){
                c=a[i][j];
            }
            if(b<=a[i][j]){
                b=a[i][j];
            }
        }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[i][j]==b){
            a[i][j]=c;
        }
        
    }
}
e=a[0][0];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(e<a[i][j]){
            e=a[i][j];
        }
     
    } 
    }
   if(e-c==0){
    cout<<0;
   }
   else{
    cout<<e;
   }
   
}