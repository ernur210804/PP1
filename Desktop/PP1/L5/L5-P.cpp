#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    for(int i=0;i<s1.size();i++){
        s1[i]=s1[i]+1;
        if(s1[i]==123){
            s1[i]=97;
        }
    cout<<(char)s1[i];

    }
}