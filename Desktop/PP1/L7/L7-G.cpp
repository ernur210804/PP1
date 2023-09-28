#include <bits/stdc++.h>
using namespace std;
int rec_fac(int n){
    if(n==0){
        return 1;
    }
    else {
        return n*rec_fac(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<rec_fac(n);
}