#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,l;
    cin>>n;
    int a1[n];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    cin>>m;
    int a2[m];
    for(int j=0;j<m;j++){
        cin>>a2[j];
    }
    l=m+n;
    int a3[l];
    for(int i=0;i<n;i++){
        a3[i]=a1[i];
    }
    for(int j=0;j<n;j++){
        a3[n+j]=a2[j];
    }
    sort(a3,a3+l);
    for(int k=0;k<l;k++){
        cout<<a3[k]<<' ';
    }
   
}