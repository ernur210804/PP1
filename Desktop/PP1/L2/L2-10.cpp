#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n,a,c;
    a=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            a++;
        }
        else{c=arr[i];
            while(c>0){
                if(c%10==0){
                    a=a+1;
                    c=c/10;
                }
                else{
                    c=c/10;
                }

            }
                
            
        }

}
cout<<a; 
}
