#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s1;
    
    cin>>s1;
    int cnt=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='a'|| s1[i]=='e' || s1[i]=='i' ||s1[i]=='o' ||s1[i]=='u'){
            cnt++;
        }
        
    }
    cout<<cnt;
}