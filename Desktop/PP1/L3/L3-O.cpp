#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,a,i;
    cin>>n;
    int arr[n];
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
           
        }

    }
    for(i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

}