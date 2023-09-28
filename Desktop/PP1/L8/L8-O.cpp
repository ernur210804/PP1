#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char> sset;

    for(int i=0;i<s.size();i++){
   
        
        if(isupper(s[i]) > 0){
            s[i]=tolower(s[i]);
            
        }
       sset.insert(s[i]);
    }
     cout<<sset.size()<<endl;

    set<char>::iterator it=sset.begin();
   
    while(it!=sset.end()){
     cout<<*it<<" ";
     it++;
    }
    

}