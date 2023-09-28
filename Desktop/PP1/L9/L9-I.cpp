#include <bits/stdc++.h> 
 
using namespace std; 

deque<string> q;
void dec(int n){
    string s;
    cin>>s;
    for(int i=0;i<q.size();i++){
        if(q[i]==s){
            cout<<"user already exists"<<endl;
            return;
        }
    }
    q.push_back(s);
    cout<<"new user added"<<endl;
}
int main(){
    
int n;
cin>>n;
while(n--){
   dec(n); 
}

}
