#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    int i;
    int cnt=0,cnt2=0;
    bool answer = true;
    for(i=0;i<s1.size();i++){
        if(s1[i]==s1[0]){
            cnt++;
        }
    }
    
    for(int i=0;i<10;i++){
        for(int j=0;j<s1.size();j++){
            if(i==s1[j]-'0'){
                cnt2++;
            }
        }
        if(cnt2 > 0 && cnt != cnt2){
            answer = false;
            break;
            }
        cnt2 = 0;
        
            
    }
    

if(answer==true){
    cout<<"YES";
}
else{
    cout<<"NO";
}
}