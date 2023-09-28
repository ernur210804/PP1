#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
set<int> s;
set<int>s1;
for(int i=0;i<n;i++){
    cin>>a[i];
}
vector<int> v;
vector<int> v1;
for(int i=0;i<n;i++){
    if(a[i]%2==0){
        v.push_back(a[i]);
    }
    else{
        v1.push_back(a[i]);
    }
}
sort(v.rbegin(),v.rend());
sort(v1.begin(),v1.end());
for(int j=0;j<v.size();j++){
    cout<<v[j]<<" ";
}
for(int j=0;j<v1.size();j++){
    cout<<v1[j]<<" ";
}



}