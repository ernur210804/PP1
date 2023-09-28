#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    
    cin>>k;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(k>=a[i] && k<=b[i]){
            cnt++;
        } 
    }
    cout<<cnt;
}