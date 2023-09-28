#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    int m;
    cin>>m;
    vector<int> v2(m);
    for(int j=0;j<m;j++){
        cin>>v2[j];
    }
    int cnt=0;
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(v2[j]==v1[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
        cnt=0;
    }
}