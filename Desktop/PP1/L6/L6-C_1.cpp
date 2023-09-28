#include <bits/stdc++.h>
 
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int cnt[200],cnt2[200];
    for(int i=0;i<n;i++){
        cnt[a[i]]++;
    }
    int sum;
    for(int i=0;i<n;i++){
        cnt2[b[i]]++;
         
    }
     for(int i=0;i<n;i++){
        sum+=min (cnt2[i],cnt[i]);
     }
    cout<<sum;
   
}