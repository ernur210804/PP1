#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        if(abs(v[i]-v[i+1])<=k){
            cout<<"Cheater";
            return 0;
        }
    }
    cout<<"no";

}