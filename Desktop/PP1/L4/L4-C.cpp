#include <iostream> 
using namespace std; 
int main(){ 
    int n,m,c; 
    int a[n][m]; 
    c=0; 
    cin>>n>>m; 
    for(int i=0;i<n;i++){ 
        for(int j=0;j<m;j++){ 
            cin>>a[i][j]; 
            if(a[i][j]<0){ 
            c=c+1;}  
        } 
    } 
    cout<<c; 
    return 0; 
}