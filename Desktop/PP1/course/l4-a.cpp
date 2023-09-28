#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int max=INT_MIN;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           
           cout<<i<<';'<<j<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1){
               a[i][j]='a';
            }
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
   // cout<<max;
    
}