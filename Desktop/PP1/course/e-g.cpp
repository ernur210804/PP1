#include <bits/stdc++.h>
using namespace std;
void rec(string s,int i){
    if(i==s.size()){
        cout<<-1;
        return;
    }
    if(s[i]>=65 && s[i]<=90 ){
        cout<<s[i];
        return;
    }
    rec(s,i+1);
}
int main(){
    string s;
    cin>>s;
    rec(s,0);
  
}