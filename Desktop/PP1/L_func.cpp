#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v;
  int a;
  while(cin>>a){
    if(a==0){
      break;
    }
    v.push_back(a);
  }
  deque<int> dq;
  for(int i=0;i<v.size();i++){
    dq.push_back(v[i]);

  }
  while(!dq.empty()){
   if(dq.size()==1){
    cout<<dq.front();
    dq.pop_front();
   }
   else{
    int c;
    c=(dq.front()+dq.back);
    cout<<c<<' ';
    dq.pop_front();
    dq.pop_back();
   }
  }
}