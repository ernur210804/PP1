#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,x,y;
    y=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        x=arr[i]%10;
        if(x==7){
            y++;
            
        }
        

    }
    cout<<y;
}