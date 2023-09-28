#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,k,cnt=0;
  cin>>n>>k;
  if(n==k){
    cout<<cnt;
    return 0;
  }
  while(n!=k){
   
    n*=2;
    cnt++;
    if(n==k){
        cout<<cnt<<endl<<n;
        return 0;
    }
    
    if(n-1==k){
        cout<<cnt+1<<endl<<n<<' '<<k;
        return 0;
    }
    n=n-1;
    cnt++;
    if(n>k+20){
        cout<<"NO";
        return 0;
    }
    
  }
  return 0;
}
