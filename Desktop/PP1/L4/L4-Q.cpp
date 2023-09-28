#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
   string s1="*",s2=".";
   cin>>n;
   int a[n][n];
   for(int i=0;i<n;i++){
    for(int j=0;j<(2*n)-1;j++){
      if(i+j>=n-1 &&j-i<=n-1){
        cout<<s1;
      }
      else{
        cout<<s2;
      }

    }cout<<endl;
   }
    }
   
  

