#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    set<char> ss;
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
        ss.insert(s[i]);
    }
    cout<<ss.size()<<endl;
    set<char> :: iterator it=ss.begin();
    while(it!=ss.end()){
        cout<<*it<<' ';
        it++;
    }
}