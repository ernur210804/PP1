#include <iostream>
#include <cmath>
 using namespace std;
        int main(){
            long long int n,a;
            a=0;
            cin>>n;
            long long int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
                a=a+arr[i];


            }
            cout<<a;
        }