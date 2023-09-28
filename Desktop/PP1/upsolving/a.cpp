#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int l=0;
    int r=0;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            cnt1++;
            l=l+a[i];
        }
        else{
            cnt2++;
            r=r+a[i];
        }
    }
    cout<<"Left hand magic power:"<<" "<<cnt1*l<<endl;
    cout<<"Right hand magic power:"<<" "<<cnt2*r;
}