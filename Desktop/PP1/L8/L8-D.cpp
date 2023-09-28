#include <bits/stdc++.h>
using namespace std;
void f(vector <int> v,int k,int n){
    for(int i=0;i<n;i++){
        if(i==k)
         continue;
         cout<<v[i]<<" ";

    }


}
int main(){
    int n,k,x;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>k;
    f(v,k,n);
}