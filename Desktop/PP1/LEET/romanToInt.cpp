#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    cin>>s;
    int n=s.size();
    int sum=0;
    for(int i=0;i<n;i++){
        if(s[i]=='I'){
            sum+=1;
        }
        if(s[i]=='V'){
            sum+=5;
        }
        if(s[i]=='X'){
            sum+=10;
        }
        if(s[i]=='L'){
            sum+=50;
        }
        if(s[i]=='C'){
            sum+=100;
        }
        if(s[i]=='D'){
            sum+=500;
        }
        if(s[i]=='M'){
            sum+=1000;
        }
       
        
    }
    for(int i=1;i<n;i++){
         if((s[i]=='V'|| s[i]=='X'|| s[i]=='L'||s[i]=='C'||s[i]=='D'||s[i]=='M')&&s[i-1]=='I'){
            sum-=1+1;
        }
         if((s[i]=='L'||s[i]=='C'||s[i]=='D'||s[i]=='M')&&s[i-1]=='V'){
            sum-=5+5;
        }
         if((s[i]=='L'||s[i]=='C'||s[i]=='D'||s[i]=='M')&&s[i-1]=='X'){
            sum-=10+10;
        }
         if((s[i]=='D'||s[i]=='M')&&s[i-1]=='L'){
            sum-=50+50;
        } if((s[i]=='D'||s[i]=='M')&&s[i-1]=='C'){
            sum-=100+100;
        }
    }
    
    cout<<sum;
}