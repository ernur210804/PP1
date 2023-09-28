#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s[0]==')' && s.size()%2!=0){
        cout<<"NO";
        return 0;
    }
    int i=0;
     while(s.size()!=0 && i<s.size()-1){     
        while(s[i]=='(' && s[i+1]==')'){
            s.erase(i,2);
            i=0;
            
        }
       i++;
     }

    if(s.size()==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    //cout<<s;
}