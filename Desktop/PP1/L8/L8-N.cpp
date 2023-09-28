#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    vector <int> v(n);
    set<int> sset;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0){
        
            continue;
        }
        sset.insert(v[i]);
    }
   set<int>::iterator it=sset.begin();
   while(it!=sset.end()){
    cout<<*it<<" ";
    it++;
   }
    

}