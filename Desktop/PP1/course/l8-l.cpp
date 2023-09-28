#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> s;
    vector<int> v(n);
    for(int i=0;i<n;i++){
       cin>>v[i];
        s.insert(v[i]);
    }
    cout<<s.size()<<endl;
    set<int> :: iterator it=s.begin();
    while(it!=s.end()){
        cout<<*it<<' ';
        it++;

    }
}