#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    set<int> s;
    vector<int> v(n);
    for(int i=0;i<n;i++){
       cin>>v[i];
        s.insert(v[i]);
    }
    set<int> :: iterator it=s.begin();
    while(it!=s.end()){
        sum+=*it;
        it++;

    }
    cout<<sum;
}