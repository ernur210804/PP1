#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,m;
    float b;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            b=sqrt(a[i][j]);
            if(b!=sqrt(a[i][j])){
                //a[i][j]=sqrt(a[i][j]);
                cout<<a[i][j]<<" ";
            } 
            else{cout<< sqrt(a[i][j])<<" ";}
            
           
        }cout<<endl;
    }
   
}