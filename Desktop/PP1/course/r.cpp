#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  char c;
  int m,n;
  cin>>s>>c;
  for(int i=0;i<s.size();i++){
    if(s[i]==c){
         m=i;
         break;
    }
   
  }
  for(int i=s.size()-1;i>=0;i--){
    if(s[i]==c){
         n=i;
         break;
    }
   
  }
  if(m==n){
    cout<<m;
  }
  else{
    cout<<m<<' '<<n;
  }

  
} 
