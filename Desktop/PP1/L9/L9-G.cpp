#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    queue<int> q;
    for(int i=0;i<s.size();i++){
        while(s[i]=='1' && s[i]==s[i+1]){
            s.erase(i,2);
        }   
    }
    for(int j=0;j<s.size();j++){
        q.push(s[j]-48);
    }
   while(!q.empty()){
   
    cout<<q.front();
    q.pop();
   }

} 