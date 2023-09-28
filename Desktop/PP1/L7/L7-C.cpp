


#include <bits/stdc++.h>
 using namespace std;
bool rec_find(int n,int a[],int target,int l,int h){
   
    int mid=(l+h)/2;
    if(a[mid]==target){
    return true;
    }
    if(l==h|| h<0){
        return false;
    }

    
    else if(a[mid]>target){
       return rec_find(n,a,target,l,mid-1);
    }
    

    else{
     return rec_find(n,a,target,mid+1,h);  
    }
     
    

}
int main(){
    
    int n,target,l,h;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }  
        
    l=0;
    h=n-1;
    cin>>target;
    if(rec_find(n,a,target,l,h)==true)
    cout<<"Yes";

    else{
        cout<<"No";
    }
    
   
    
}
 
 
 
 





























 //penis