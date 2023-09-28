#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    set<string> ss;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>m;
    vector<string> v1(m);
    for(int j=0;j<m;j++){
        cin>>v1[j];
        ss.insert(v1[j]);

    }
    bool b; 
    cout<<"Missed students:"<<endl;
    for(int i=0;i<n;i++){
        b=false;
        for(int j=0;j<m;j++){
            if(v[i]==v1[j]){
                b=true;
                break;
            }
        }
        if(b==false){
            cout<<'-'<<v[i]<<endl;
        }

    }
    
    cout<<endl;
    cout<<"Missed students:"<<endl;
    set<string> :: iterator it=ss.begin();
    while(it!=ss.end()){
        bool b1=false;
        for(int i=0;i<n;i++){
            if(*it==v[i]){
                b1=true;
                break;
            }
        }
        if(!b1){
            cout<<'-'<<*it<<endl;
        }
        it++;
    }
}