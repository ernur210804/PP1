#include <iostream>
#include <cmath>
 using namespace std;
    int main(){
        int n,x;
        
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
           
        }
        x=arr[0];
         for(int i=0;i<n;i++){
            
            if(x<arr[i]){x=arr[i];}
             }
        cout<<x;
    }