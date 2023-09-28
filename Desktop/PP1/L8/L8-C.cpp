#include <bits/stdc++.h>
using namespace std;
void f(vector <int> v,int m,int k){
    int b=v.size()-k-1;
reverse((v.begin())+m,(v.end())-b);
for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        
    }
}
int main(){
    int n,x,m,k;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>m>>k;
    f(v,m,k);


}