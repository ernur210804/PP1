#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string a;
    int c=0,n=0;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(i%2==0){
            c=c+a[i];
        }
        else{
            n=n+a[i];
        }
        
    }
    if(n==c){
     cout<<"YES";
     return 0;
     }
     cout<<"NO";
     
    
    
 
    
}