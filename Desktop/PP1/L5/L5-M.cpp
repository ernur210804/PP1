#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
int main(){
    stringstream ss;
    string s1;
    char a;
    int c;
    //ss<<s1<<a<<c;
    cin>>s1>>a>>c;
    int cnt=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==a){
            cnt++;
        }
    }
    if(cnt==c){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}