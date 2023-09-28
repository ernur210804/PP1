#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int i,a,b,c,d,j;
  cin>>i;
  for(j=i+1;j<10000;j++){
  //cout<<j<<endl;
  a=j/1000;
  b=(j%1000)/100;
  c=(j%100)/10;
  d=j%10;
  //cout<<a<<" "<<b<<" "<<c<<" "<<" "<<d<<endl;

  if(a!=b && b!=c && c!=d && c!=a && a!=d && b!=d){
    
    cout<<j<<endl;
    return 0;
    
  }
  }
  
    
  
}