#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector <int> v(n);
for(int i=0;i<n;i++){
 cin>>v[i];
}
reverse(v.begin(),v.end());
deque<int> d;
for(int i=0;i<n;i++){
 if(v[i]%2==0){
  d.push_front(v[i]);
 }
 else{
  d.push_back(v[i]);
 }
}
deque<int> :: iterator it=d.begin();
while(it!=d.end()){
 cout<<*it<<' ';
 it++;
 
}
    }