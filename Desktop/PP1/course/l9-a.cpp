#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    pair<int ,int> p[n];
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        p[i].first=a;
        p[i].second=b;
    }
    sort(p,p+n);
    for(int i=0;i<n;i++){
        cout<<p[i].first<<' '<<p[i].second<<endl;
    }

}