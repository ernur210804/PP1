#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v;
    queue<string> q;
    for(int i=0;i<n;i++){
        int a;
        string s;
        cin>>a;
        if(a==2){
            q.pop();
        }
        else{
            cin>>s;
            q.push(s);
         
        }
        if(!q.empty()){
            v.push_back(q.front());
        }
        else{
            v.push_back("queue is empty");
        }
        
    }
    vector<string>:: iterator it=v.begin();
    while(it!=v.end()){
        cout<<*it<<endl;
        it++;
    }
}