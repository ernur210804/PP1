#include <iostream>
using namespace std;
int main(){
    int n,i,j,k=1,m=1;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
       for(j=0;j<n;j++){
        cin>>a[i][j];
       }
    }

    for(int i=0;i<n;i++){
     for(j=0;j<n;j++){
        if(i==0 && i+j>=0 && i+j<n){
            cout<<a[i][j];
        }
        if(i!=0 && j==0 && i+j>=0 && i+j<n){
            cout<<a[i][j];
        }
       }
    }
    cout<<endl;
    for(i=0;i<n;i++){
     for(j=0;j<n;j++){
        if(i==k && j!=k-1 && i+j>=0 && i+j>=(n-1)*(n-1)){
            cout<<a[i][j];
        }
        if(i!=k-1 && j==m && i+j>=0 && i+j>=(n-1)*(n-1)){
            cout<<a[i][j];
        }
        k++;
        m++;
        cout<<endl;
       }
    }
    

   
   

    }
   