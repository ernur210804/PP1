#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a%2==0){
            v1.push_back(a);
        }
        else{
            v2.push_back(a);
        }

    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    vector<int>::reverse_iterator it1=v1.rbegin();
    while(it1!=v1.rend()){
        cout<<*it1<<' ';
        it1++;
    }
    vector<int>::iterator it2=v2.begin();
    while(it2!=v2.end()){
        cout<<*it2<<' ';
        it2++;
    }

}