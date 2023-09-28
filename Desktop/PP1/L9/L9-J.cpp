#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int> m;
    for(int i=0;i<n;i++){
        string s;
        int k;
        cin>>s>>k;
        m[s]+=k;// if the keys are similar then sum up the values of k
    }

    for(map<string,int>::iterator it=m.begin();it!=m.end();it++){
        
        cout<<it->first<<' '<<it->second<<endl;
    }

}