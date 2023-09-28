#include <bits/stdc++.h>
using namespace std;
int rec(int n){
    int sum=0;
   if(n==0){
    return sum;
   }
   sum=(n%10)/2;
  return sum+rec(n/10);
}
int main(){
    int n;
    cin>>n;
    cout<<rec(n);
}