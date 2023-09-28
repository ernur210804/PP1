#include <iostream> 
using namespace std; 
int main(){ 
    int n,i,j;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        a[0][i]=i;
        a[i][0]=i;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
           a[i][j]=a[0][i]*a[j][0];
           
        }
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         cout<<a[i][j]<<" ";
        }cout<<endl;  
        }
       
}