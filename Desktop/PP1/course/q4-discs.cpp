#include <bits/stdc++.h>
using namespace std;
/*
bool comp(vector<int>v1,vector<int>v2){
    int sum=0;
    int sum1=0;
    for(int i=0;i<v1.size();i++){
        sum=sum+(v1[0]*3600+v1[1]*60+v1[2]);
    }
    for(int i=0;i<v1.size();i++){
        sum1=sum1+(v2[0]*3600+v2[1]*60+v2[2]);
        
    }
    return sum<sum1;
}
int main(){
    int n,x;
    cin>>n;
    string s;
    cin >> s;
    vector<vector<int> > aidos;
    if(s=="inc"){
        for(int i=0;i<n;i++){
            vector<int>kaki;
            for(int j=0;j<3;j++){
                cin >> x;
                kaki.push_back(x);
            }
            aidos.push_back(kaki);
        }
        sort(aidos.begin(),aidos.end(),comp);
        for(int i=0;i<aidos.size();i++){
            for(int j=0;j<aidos[i].size();j++){
                cout << aidos[i][j] << " ";

            }
            cout << endl;
        }
    }
    }
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
 int n;
 string s;
 cin >> n;
 cin>>s;
map<int,pair<int,pair<int,int> > > mp;
for(int i=0;i<n;i++){
 int a,b,c,d;
 cin>>a>>b>>c;
 d=a*3600+b*60+c;
 if(s=="inc"){
 mp[d]={a,{b,c}}; 
 }
 else{
  d=999999999-d;
  mp[d]={a,{b,c}};
 }
 
}
map<int,pair<int,pair<int,int> > >:: iterator it=mp.begin();
while(it!=mp.end()){
 cout<<it->second.first<<' '<<it->second.second.first<<' '<<it->second.second.second<<endl;
it++;
}
}

    