#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int max1=INT_MIN;
    int max2=INT_MIN;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];

        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(max1<a[i][j]){
                max1=a[i][j];
            }

        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(max2<a[i][j] && a[i][j]<max1){
                max2=a[i][j];
            }

        }
    }
    cout<<max2;
}