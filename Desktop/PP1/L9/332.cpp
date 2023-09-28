#include <bits/stdc++.h>

using namespace std;
int main(){
int n;
cin>>n;
map<string,int> mp;
for(int i=0;i<n;i++){
    string s;
    int a;
    cin>>s>>a;
    mp[s]++;
}
int cnt=0,cnt1=0;
map<string,int> :: iterator it=mp.begin();
while(it!=mp.end()){
if(it->second==2){
    cout<<it->first<<endl;
    cnt1++;
}
else if(it->second==1){
    cnt++;
}

it++;
}
if(cnt>1 && cnt1==0){
    cout<<"NO";
}
}