#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    
    map<string,int > mp;
    
    for(int i=0;i<n;i++){
     string s="";
     char ss;
     cin>>ss;
     char a,b;
     int c,d;
     cin>>a>>c>>b>>d;
     s=s+a+' '+ss+' '+b;
     if(ss=='+'){
     mp[s]=c+d;
     }
     if(ss=='-'){
     mp[s]=c-d;
     }
     if(ss=='*'){
     mp[s]=c*d;
     }
     if(ss=='/'){
     mp[s]=c/d;
     }
    }
    map<string,int >:: iterator it=mp.begin();
    while(it!=mp.end()){
        cout<<it->first<<" = "<<it->second<<endl;
        it++;
    }
}