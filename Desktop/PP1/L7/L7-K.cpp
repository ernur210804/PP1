#include <bits/stdc++.h>
using namespace std;
void rec_max(string s,int i,int max){
    int a;
    if(i==s.size()){
        cout<<max;
        return;
    }
    a=s[i]-48;
    if(max<a){
        max=a;
    }
    rec_max(s,i+1,max);
}
int main(){
    string s;
    cin>>s;
    rec_max(s,0,0);
}
/*
void rec_max(int n, int max){
if(n==0){
cout<<max;
return;
}
int a;
a=n%10;
if(max<a){
    max=a;
}
rec_max(n/10, max);
}
int main(){
int n;
cin>>n;
rec_max(n, 0);

}
*/
