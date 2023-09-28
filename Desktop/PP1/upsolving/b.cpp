#include <iostream>
using namespace std;
int main()
{
   int n,h;
   cin>>n>>h;
   int a[n][h];
   int k,x1,x2,y1,y2;
   cin>>k;
   
   for(int i=0;i<n;i++){
    for(int j=0;j<h;j++){
      a[i][j]=0;
    }
   }
   for(int i=0;i<k;i++){
    cin>>x1>>y1>>x2>>y2;
    for(int j=x1;j<x2;j++){
        for(int b=y1;b<y2;b++){
            a[j][b]=1;
        }
    }
   }

   int cnt=0;
   for(int i=0;i<n;i++){
    for(int j=0;j<h;j++){
      if(a[i][j]==0){
        cnt++;
      }
    }
   }
   cout<<cnt;
   
}