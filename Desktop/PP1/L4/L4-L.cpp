#include <iostream> 
using namespace std;
int main(){
    int n,m,b,c = 0,r=1,e=1;
    int j,i;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
   cout<<"coordinates of min elements:"<<endl;
    for(int i=0;i<m;i++){
        b=a[0][i];       
        for(int j=0;j<n;j++){
            if(b>a[j][i]){
                b=a[j][i];
                 r=i+1;
                 e=j+1;
                 
            }
        
       
        } cout<<e<<";"<<r<<endl;
        c=c+b; 
               
   } 
   cout<<endl;
   cout<<"Their sum:"<<endl;
   cout<<c;
}