#include <bits/stdc++.h>
using namespace std;
int cnt=0;
void rec(string s,int i){
if(i==s.size()){
    cout<<cnt;
    return;
}
if(s[i]%2==0){
    cnt++;
}

rec(s,i+1);
}
int main(){
    string s;
    cin>>s;
    rec(s,0);

}