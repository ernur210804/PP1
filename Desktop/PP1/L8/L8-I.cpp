#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>k;
    for(int i=0;i<n;i++){
        if(v[i]==k){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
}