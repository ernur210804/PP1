#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k,a;
    cin>>k>>a;
    
    
    for(int i=0;i<n+1;i++){
       if(i==k){
    v.insert(v.begin()+i,a);
    
       }
      // n=n+1;
    cout<<v[i]<<" ";
    }

}