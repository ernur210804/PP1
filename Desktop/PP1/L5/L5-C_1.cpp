#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    string s;
    string t;
    cin>>s;//>>t;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            s[i]=s[i+1];
            
            cout<<s[i];
        }
    }
    }