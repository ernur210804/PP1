#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int max=-1e9;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(max<a[i][j]){
            max=a[i][j];
           }
          
        }
        
        for(int j=0;j<n;j++){
            a[i][j]=max;
            cout<<a[i][j]<<" ";
        }cout<<endl;
          max=-1e9;
    }
}
