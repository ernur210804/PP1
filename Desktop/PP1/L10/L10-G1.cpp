#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<pair<pair<string,int>,pair<string,int> >,int> mp;
    for(int i=0;i<n;i++){
        int m,m1;
        string s,s1;
        cin>>s>>m>>s1>>m1;
        mp[make_pair(make_pair(s,m),make_pair(s1,m1))] = m + m1;
    }
    map<pair<pair<string,int>,pair<string,int> >,int> :: iterator it=mp.begin();
    while(it!=mp.end()){
        cout<<it->first.first.first<<" and "<<it->first.second.first<<it->second<<endl;
        it++;
    }
}