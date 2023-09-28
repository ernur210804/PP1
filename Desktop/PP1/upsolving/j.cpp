#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int max=-1e9;
    int min=1e9;
    for(int i=0;i<s.size();i++){
        s[i]=s[i]-'0';
        if(max<s[i]){
            max=s[i];
        }
        if(min>s[i]){
            min=s[i];
        }
    }
    cout<<max<<" "<<min;
}