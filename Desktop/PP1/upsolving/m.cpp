#include <bits/stdc++.h>
using namespace std;

int main(){
    double n,m,cnt=0;
    cin>>n>>m;
    double l=m/n;
    for(int i=-60;i<=60;i++){
        if(pow(2,i)==l){
            cout<<"YES"<<" "<<i;
            return 0;
        }
    }
    
    cout<<"NO";
   

    
}