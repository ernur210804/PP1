#include <iostream>
using namespace std;
void positive(int n){
    if(n>0){
        cout<<n;
    }
    else{
        cout<<-n;
    }
}
    int main(){
        int n;
        cin>>n;
        positive(n);
        
    
}