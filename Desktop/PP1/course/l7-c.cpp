#include <bits/stdc++.h>
using namespace std;
bool b=true;
bool binarys(int l,int r,int mid,int target,int a[]){
    
mid=(l+r)/2;
if(a[mid]==target){
   return b;
}
if(l==r|| r<0){
    b=false;
    return b;
}
else if(a[mid]>target){
    binarys(l,mid-1,mid,target,a);
}
else if(a[mid]<target){
    binarys(mid+1,r,mid,target,a);
}


}
int main(){
    int n,l,r,mid;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int target;
    cin>>target;
    if(binarys(0,n-1,mid,target,a)==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}