#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s1;
    cin>>s1;
    int cnt=0;
   
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='7'||s1[i]=='4')
        cnt++;
    }
    if(cnt==7 ||cnt==4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
   
}