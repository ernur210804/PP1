#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    int m;
    vector<int> v1(n);
    vector<string> v2(n);
    for(int i=0;i<n;i++){
        cin>>s;
        cin>>m;
        v1[i]=m;
        v2[i]=s;

    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<n;i++){
        cout<<v2[i]<<" "<<v1[i]<<endl;
    }
}