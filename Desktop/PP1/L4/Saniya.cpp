#include <iostream> 
#include <cmath> 
using namespace std; 
int main(){ 
    int n,a,b,c,x; 
    cin >> n; 
    x=n; 
    a=0; 
    b=n-1; 
    int z[n][n]; 
    for(int i=0;i<n;i++){ 
        for(int j=0;j<n;j++){ 
            cin>>z[i][j]; 
        } 
    } 
     
    for(int y=0;y<2*n+1;y++){ 
        for(int i=0;i<n;i++){ 
            for(int j=0;j<n;j++){ 
                if(j-i==b){ 
                    cout<<z[i][j]<<" "; 
                } 
            } 
              
    }  
    b--; 
    cout << endl;  
    } 
     
    return 0; 
}