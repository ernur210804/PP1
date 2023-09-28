#include <bits/stdc++.h>
using namespace std;
void f(string s,int n){
    int cnt=0;
for(int i=0;i<s.size();i++){
    if(isdigit(s[i])){
        cnt++;

    }
}
if(n<=cnt){
    cout<<"YES";
}
else{
    cout<<"NO";
}
}
int main(){
    string s;
    int n;
    cin>>s>>n;
    f(s,n);

}