#include <bits/stdc++.h>
using namespace std;
deque<string> q;
void f(int n){
    string s;
    cin>>s;
    for(int i=0;i<q.size();i++){
        if(q[i]==s){
            cout<<"exist"<<endl;
            return;
        }
    }
    q.push_back(s);
    cout<<"new"<<endl;
}
int main(){
   int n;
   cin>>n;
   while(n--){
     f(n);
   }
}