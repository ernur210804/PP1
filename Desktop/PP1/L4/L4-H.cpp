#include <iostream> 
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   int a[n][m];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
   }
   int sum,min,x;
   min=100000;
   for(int i=0;i<n;i++){
    sum=0;
  
    for(int j=0;j<m;j++){
          
        sum=sum+a[i][j];
    }  
    if(min>sum){
            min=sum;
            x=i+1;
        }
   }
    cout<<x;
   }

