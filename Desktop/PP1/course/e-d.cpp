#include <bits/stdc++.h>
using namespace std;
long long b;
void rec(long long k,long long m,long long a1,long long a2,long b){

   if(m==0){
      b=b%10;
      cout<<b;
      return;
   }
   b=a1+k*a2;
   if(b%100==0){
     b=b/100;
   }
   rec(k,m-1,a2,b,b);
   

}
int main(){
  long long k,m;
  cin>>k>>m;
  rec(k,m-2,0,1,b);
}