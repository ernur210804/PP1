#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    vector <int> v(n);
    set<int> sset;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sset.insert(v[i]);
    }
    int sum=0;
    set <int>:: iterator it=sset.begin();
    while(it!=sset.end()){
    sum=sum+*it;
    
    it++;
    }
   
  cout<<sum;

}