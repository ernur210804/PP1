#include <iostream>
using namespace std;
string rec(string s, int i, int j){
    if(i > j)return "Yes";

    if(s[i] != s[j])return "No";
    return rec(s, i+1, j-1);
}
int main(){
    string s;
    cin>>s;
 
    int i = 0, j = s.size()-1;
    cout<<rec(s, i, j);
    
}

/*
#include <bits/stdc++.h>
using namespace std ;
bool rec(string s,int i,int j,bool b=true){
   
if(i==j ){
    return b ;
}


if(s[i]!=s[j]){
    return false;
    
}
rec(s,i+1,j-1,b);

}
int main(){
    string s;
    cin>>s;
    bool b;
    if(s.size()==1){
        cout<<"Yes";
        return 0;
    }
    if(rec(s,0,s.size()-1,b)==true){
        cout<<"Yes";
    }
    if(rec(s,0,s.size()-1,b)==false){
        cout<<"No";
    }
    }
*/

   