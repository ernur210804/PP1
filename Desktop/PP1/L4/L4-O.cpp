#include <iostream>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    c= -10000000;
    int b;
    int l;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && c<a[i][j] ){
                c=a[i][j];
                
                l=j;
                b=l+1;
            }
        }
    }
    
     
    cout<<"Maximum element is:"<<" "<<c<<" "<<"with coordinates:"<<" "<<l+1<<";"<<b;
    
}
