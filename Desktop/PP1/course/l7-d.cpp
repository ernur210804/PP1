#include <bits/stdc++.h>
using namespace std;
int sum=0;
void rec(string s,int i){
    if(s.size()==i){
        cout<<sum;
        return;
    }
    sum+=s[i]-48;
    
    rec(s,i+1);


}
int main(){
    string s;
    cin>>s;
    rec(s,0);

}