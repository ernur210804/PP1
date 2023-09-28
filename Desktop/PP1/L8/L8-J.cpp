#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int max=-1e9;
    int min=1e9;
       for(int i=0;i<n;i++){
        if(max<v[i]){
         max=v[i];
        }
        if(min>v[i]){
            min=v[i];
        }
    }
    int b=max-min;
    cout<<b;

}