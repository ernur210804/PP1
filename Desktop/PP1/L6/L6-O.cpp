#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    int c,b=0;

    for(int i=0;i<s1.size();i++){
        s1[i]=s1[i]-48;
        b=b+s1[i];
        c=s1[s1.size()-1];
    }
    if(b%c==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}