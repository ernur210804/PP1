#include <iostream>
#include  <cmath>
using namespace std;
int main (){
    int n,a;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    a=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            a=arr[i];
        cout<<a<<" ";
        }
      
    }
}