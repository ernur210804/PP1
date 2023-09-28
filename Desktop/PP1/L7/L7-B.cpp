
#include <iostream>
using namespace std;
void rec(int n){
    if(n == 0)return;
    rec(n/2);
    cout<<n%2;
}
int main(){
    int n;
    cin>>n;
    
    rec(n);
    
}
/*
#include <iostream>
using namespace std;
int recursive_binary(int n,string i){
    if(n==1){
    return 1;
    }
    
    if(n%2==0){
        i=i+(char)0;
    }
    else{
        i=i+(char)1;
    }
   
    return recursive_binary( n/2);
        
    
    
}
int main(){
    int n,i,c;
    int b;
    cin>>n;
    
    b=recursive_binary( n);
   
    cout<<b;
    

}
*/
