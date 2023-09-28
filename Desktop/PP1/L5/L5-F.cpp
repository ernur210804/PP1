#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s1;//0123456 0 3=1 4 2 5=3 6
    string s2="";
    int a,b;
    cin>>s1>>a>>b;
    for(int i=0;i<s1.size();i++){
        if(i>=a && i<=b){
            s2+=s1[i];
            
        }
    }
    cout<<s2;
}