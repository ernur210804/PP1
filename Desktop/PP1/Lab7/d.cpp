#include <bits/stdc++.h>
using namespace std;
int sum=0;
void rec(string s,int i){
    if(i==s.size()){
        cout<<sum;
        return;
    }
    sum+=s[i]-48;
    rec(s,i+1);

}
int main(){
string s;
cin>>s;
int i;
rec(s,0);
}
