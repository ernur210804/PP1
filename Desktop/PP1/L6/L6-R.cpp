#include <iostream>
#include <algorithm>
using namespace std;
void upper(string s1){
    for(int i=0;i<s1.size();i++){
    if(s1[i]>96 && s1[i]<123)
    s1[i]=s1[i]-32;
    
    }
    cout<<s1;
    
}
int main(){
    string s1;
    cin>>s1;
   
   upper(s1);
   
   
}