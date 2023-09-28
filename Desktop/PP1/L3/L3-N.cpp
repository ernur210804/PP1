#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
     
    }
    for(int i=0;i<n;i++){
        a=pow(arr[i],2);
     cout<<a<<" ";
     }

}