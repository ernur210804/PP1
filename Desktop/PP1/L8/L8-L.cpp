#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    vector <int> v(n);
    set<int> set;
    for(int i=0;i<n;i++){
        cin>>v[i];
        set.insert(v[i]);
    }
    
    int cnt=0;
   cout<<set.size();

}