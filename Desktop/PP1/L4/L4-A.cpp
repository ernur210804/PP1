#include <iostream>
using namespace std;
int main(){
    int n,a,i,j;
    cin>>n;
    int arr[n][n];
   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             cin>>arr[i][j];
        }
    }
     a=arr[0][0];
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a<arr[i][j]){
               a=arr[i][j];
            }   
        }
    }
    cout<<a;
   
}
