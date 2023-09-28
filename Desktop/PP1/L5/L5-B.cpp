#include <iostream>
#include <bitset>
#include <string>
using namespace std;
int main(){
    string s1;
    int a,b;
    cin>>s1;
    for(int i=0;i<s1.size();i++){
    a=s1[i];
    if(a>=97 && a<=122){
    b=a-32;
    }
    if(a>=65 &&a<=90){
        b=a;
    }
    cout<<(char)b;
   
    }
    
}
