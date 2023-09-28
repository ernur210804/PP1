#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double n,k;
    cin>>n>>k; 
    
    double a= ceil((2*n)/k);
    

    if (a==1){
        cout<<2;
    }
    else{
        cout<<a;
    }
    

}