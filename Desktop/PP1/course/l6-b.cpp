#include <iostream>
#include <cmath>
using namespace std;
void f(){
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
       
       int c=abs((a[i]-arr[i]));
        
        cout<<c<<" ";
    }
}
int main(){
    f();
}