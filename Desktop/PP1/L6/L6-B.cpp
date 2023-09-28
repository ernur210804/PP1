#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    long int a[n],arr[n],b[n];
    for(int i=0;i <n;i++){
        cin>>a[i];
       
        
    }
     for(int i=0;i <n;i++){
        cin>>arr[i];
      
        
    }
     for(int i=0;i <n;i++){
       
        b[i]=sqrt((a[i]-arr[i])*(a[i]-arr[i]));
        
        cout<<b[i]<<" ";
    }
}