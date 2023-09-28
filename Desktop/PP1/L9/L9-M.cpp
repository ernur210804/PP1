#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
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
     cout<<q.front()<<endl;
    }
    else {
        cout<<"queue is empty"<<endl;
    }
    }
    

   
   
}

/*
pair <int,string> p;

int main(){
    int n;
    cin>>n;
    string s2="queue is empty";
    map<string,int> mp;
    for(int i=0;i<n;i++){
        int m;
        string s;
        cin>>m;
        
        if(m==2){
          
          mp[s2]=m;
            
        }
        else{
            cin>>s; 
            mp[s]=m;
        }
        
    }
    map<string,int> ::iterator it=mp.begin();
    while(it!=mp.end()){
        cout<<it->first<<endl;
        it++;
    }
}
*/
