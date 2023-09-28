#include <bits/stdc++.h>
 using namespace std;
 int main(){
    int n;
    cin>>n;
    int a[n];
    int max1,max2;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b = sizeof(a) / sizeof(a[0]);
    sort(a, a + b);
    for(int i=0;i<n;i++){
        max1=a[n-1];
        max2=a[n-2];
    }
    cout<<max1*max2;
  

 }