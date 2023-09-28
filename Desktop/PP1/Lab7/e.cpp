#include <bits/stdc++.h>
using namespace std;
void rec(int n){
if(n==1){
    cout<<"Yes";
    return;
}
if(n%2!=0){
    cout<<"No";
    return;
}
rec(n/2);
}
int main(){
    int n;
    cin>>n;
    rec(n);
}