#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(t==a[i]){
            cout<<i+1;
            return 0;
        }
      
    }
    cout<<n;
}
