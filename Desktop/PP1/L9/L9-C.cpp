#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long cnt=0;
    sort(v.begin(), v.end());
    for(int i = 0 ; i < v.size(); i++){
        if(v[i] == v[i+1]){
            cnt++;
            if(v[i+1] == v[i+2]){
                cnt--;
            }
            else continue;
        }
    }
    cout<<cnt;
}