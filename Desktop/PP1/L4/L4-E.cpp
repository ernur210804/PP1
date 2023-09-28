#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,b,c;
    
    
    cin>>n;
    
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
        a[i][0]=i;
        a[0][j]=j;
        a[i][j]=a[i][0]*a[0][j];
        if(j<=i){
            cout<<"[*]";
        }
        
        
        }cout<<endl;
       
    }
}