#include <bits/stdc++.h>
using namespace std;
int  rec_sum(string s,int i,int sum){
   
   if(s.size()==i){
       return sum;
   }
   sum+=s[i]-'0';
   
     return rec_sum(s,i+1,sum);
    //cout<<sum;
}
int main(){
    string s;
    cin>>s;
    int i=0,sum=0;
   cout<<rec_sum(s,i,sum);
}




/*
#include <bits/stdc++.h>
using namespace std;
long long  rec_sum(long long  n){
    long long  i=0;
    
 if(n<10){
    return n;
 }
 i=i+n%10;
   return i+rec_sum(n/10);
  
 
}
int main(){
    long long n;
    cin>>n;
    cout<<rec_sum(n);
}
*/

