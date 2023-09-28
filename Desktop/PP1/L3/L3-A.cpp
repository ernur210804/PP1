#include <iostream>
#include <cmath>
 using namespace std;
 int main(){
    int n,c;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        c=arr[i];
        if(c%2==1){
           cout<<c<<" ";
        }

   }
   
 }