#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    b=a%2;
    if(b==1) 
    {
        cout<<"Super";
        
    }
    else
    {
        if(2<=a && a<=5) 
    {
        cout<<"Not Super";
    }        if(6<=a && a<=20) 
        {
            cout<<"Super";
            
        }if(20<a) 
            {
                cout<<"Not Super";
            }

        
    } 


}