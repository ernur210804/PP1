#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    int a=s1.size();
    
    for(int i=0;i<a/2;i++){
        if(s1[i]!=s1[a-1-i]){
            cout<<"NO";
            return 0;
        }
    }
cout<<"YES";
}