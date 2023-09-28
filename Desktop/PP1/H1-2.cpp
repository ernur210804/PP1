//ГИПОТЕНУЗА
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=0,c=0,d=0,e=0,f=0;
    string s;
    string s1=  "ABCEHKMOPTXY";
    
   for(int i=0;i<a;i++){
    cin>>s;
    for(int j=1;j<s.size()-2;j++){
        for(int b=0;b<s1.size();b++){
        if(s[0]==s1[b] ){
            b=1;
        }
        if(s[j]>='0'&& s[j]<='9'){
            c=1;
        }
        if(s[3]==s1[b]){
            d=1;
        }
        if(s[4]==s1[b]){
            e=1;
        }
        f=b+c+d+e;
        cout<<f;
        }
    }
   }
   cout<<"NO";
    
}