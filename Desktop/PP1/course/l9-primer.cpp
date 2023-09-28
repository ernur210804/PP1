#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int> mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        mp[s]++;
        
    }
    int cnt=0;
    map<string,int> :: iterator it=mp.begin();
    while(it!=mp.end()){
        if(it->second==3){
            cnt++;
        }
        it++;
        
    }
    cout<<cnt;
}