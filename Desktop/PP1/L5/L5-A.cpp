#include <iostream>
#include <bitset>
#include <string>
using namespace std;
int main(){
    string s;
    int b=0,c=0;
    cin>>s;
   for (int i=0; i<s.size(); i++) {
    int a=s[i];

    //cout << s[i]<<" ";  
    if(a>=65 && a<=90){
        c++;
    }
    if(a>=97 && a<=122){
        b++;
    }
} 
cout<<b<<" "<<c;
    

}