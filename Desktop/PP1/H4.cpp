#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string s2;
    string s3;
    string s4="";
    string s5="";
    

    cin>>s;
    string s6=s;
    string s7=s;
    int n=s.size();
   
    cout<<s[2]<<endl;
    cout<<s[n-2]<<endl;
     s2=s.erase(5,n);
     cout<<s2<<endl;
    s3=s7.erase(n-2,n);
    cout<<s3<<endl;
    for(int i=0;i<n;i++){
        if(i%2==0){
            s5+=s6[i];
        }
    }
    
    cout<<s5<<endl;
    for(int i=0;i<n;i++){
        if(i%2!=0){
            cout<<s6[i];
        }
    }
    cout<<endl;
    for(int i=n-1;i>=0;i--){
        if(i%2==0){
            s4+=s6[i];
        }
    }
  
    cout<<s4;
    cout<<endl;
    cout<<n;

}