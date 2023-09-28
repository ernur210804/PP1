#include <bits/stdc++.h>
using namespace std;
void rec_degree(int n){
    if(n==1){
        cout<<"Yes";
        return ;
    }
    if(n%2==0){
     rec_degree(n/2);
    }
    else{
        cout<<"No";
    }
}
int main(){
    int n;
    cin>>n;
    rec_degree(n);
}