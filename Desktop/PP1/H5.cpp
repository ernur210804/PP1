#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m,a,b;
cin>>n;
vector<int> v(n);
vector<int> v1(n);
int k;
for(int i=0;i<n;i++){
  cin>>m;
  k=m-1;
  for(int j=0;j<m;j++){
  //cin>>a;
  cin>>v1[j];
  v[j]=v1[j];
  }
  sort(v.begin(),v.end());
  int max=INT_MIN;
  int max2=INT_MIN;
  for(int j=0;j<n;j++){
    if(v1[j]>max){
      max=v1[j];
    }
  }
  for(int j=0;j<n;j++){
    if(v1[j]>max2 && max<max2){
      max2=v1[j];
    }
  }
  
   for(int j=0;j<m;j++){
    if(v1[j]!=max){
      b=(v1[j]-max);
     cout<<b<<" ";
    }
    else{
      b=(max-max2);
    cout<<b<<" ";
    } 
   
  }
}
}


