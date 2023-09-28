#include <bits/stdc++.h>
using namespace std;
void pre(string s1,string s2,string s3){
    string s="";
    for(int i=0;i<s1.size();i++){
        for(int j=0;j<s2.size();j++){
            for(int k=0;k<s3.size();k++){
                if(s1[0]!=s2[0]){
                    break;
                }
                if(s1[i]==s2[j]&& s1[i]==s3[k]){
                    s+=s1[i];
                }
            }
        }      
    }
    if(s.size()==0){
        cout<<" ";
    }
    else
    cout<<s;
}
int main(){
    string s1;
    string s2;
    string s3;

    cin>>s1>>s2>>s3;
    pre(s1,s2,s3);

}
