#include <bits/stdc++.h>
using namespace std;
int f(int n){
    int cnt=0;
    int a[n];
    int b[n];
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
              cnt++;
              b[j]=-1000000000;
              break;
            }
        }
    }
    return cnt;

}
int main(){
    int n,cnt=0;;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
  
   cout<<f(n);
}