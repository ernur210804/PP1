#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        int b=0;
        for(int j=0;j<m;j++){
        b=b+a[i][j];
        
        }cout<<"The sum of row number"<<" "<< i+1<< " "<<"is"<<" "<<b;
        cout<<endl;
    }
    for(int j=0;j<m;j++){
        int b=0;
        for(int i=0;i<n;i++){
        b=b+a[i][j];
        
        }cout<<"The sum of column number"<<" "<< j+1<< " "<<"is"<<" "<<b;
        cout<<endl;
    }
}