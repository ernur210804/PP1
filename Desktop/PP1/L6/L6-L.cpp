#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s1;
    int n,c=0;
    cin>>s1>>n;
    for(int i=0;i<s1.size();i++){
        if(isdigit(s1[i])){
            c++;
            if(c==n){
               cout<<"Valid"; 
               return 0;
            }
        }
        else{
            c=0;
        }
    }
     if(c!=n)
        cout<<"Not valid";
            
}