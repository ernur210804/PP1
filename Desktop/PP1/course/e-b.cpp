#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    char ar[8][8];
    for(int j=0;j<8;j++){
        for(int k=0;k<8;k++){
            ar[j][k]='0';
        }
    }
    for(int i=0;i<n;i++){
    cin>>s;
    int a,b;
    a=s[0]-65;
    b=s[1]-49;
    ar[a][b]='*';
    
   
    }
     for(int j=0;j<8;j++){
        for(int k=0;k<8;k++){
            cout<<ar[j][k]<<' ';
        }
        cout<<endl;
    }
    
}