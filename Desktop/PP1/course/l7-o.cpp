#include <bits/stdc++.h>
using namespace std;
void rec(int n,int m,string s1){
if(n==0){
    return;
}
int c=n%m;

rec(n/m,m,s1);
cout<<s1[c];
}
int main(){
    int n,m;
    cin>>n>>m;
    string s1="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    rec(n,m,s1);
}