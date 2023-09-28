#include <bits/stdc++.h>
using namespace std;
long long  rec(long long sum){
    int n;
    cin>>n;
    sum+=n;
    if(n==0){
        return sum;
    }
    return rec(sum); //3
 
}
int main(){
    long long sum=0;
   cout<<rec(sum);
}
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    int i=0;
    vector <int> v;
    while(true){
       cin>>i;
       if(i==0){
        break;
       
       }
       v.push_back(i);
    }
    for(auto elem:v)
    sum+=elem;
    cout<<sum<<" ";
}
*/