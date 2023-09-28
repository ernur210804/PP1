#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,a,b;
    a=0;
    b=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
         if(arr[i]%2==0 ){
            a++;
         }
         else  {
            b++;

         }

    }cout<<a<< " "<<b<< " ";
   
    
}