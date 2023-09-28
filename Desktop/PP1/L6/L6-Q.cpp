#include <iostream>
using namespace std;
void girls(float n,float b,float c){
    c=(b/n)*100;
    cout<<c;
}
int main(){
    float n,b;
    float c;
    cin>>n>>b;
    
    girls(n,b,c);
}