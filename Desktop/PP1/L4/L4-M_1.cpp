#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, c=1, x=0, y=0; 
    cin >> n;
    int arr[n][n];
    y=n;
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < y; j++)
        {
            arr[i][j]=0;
        }
        
    }
    while(y>x){
        for (int i = x; i < y; i++)
    {
        if(i==x){
            for (int j = x; j < y; j++){    
               arr[i][j]=c++;
            }
        }
        else{
            for (int j = x; j < y; j++){
                if(j==y-1){
                arr[i][j]=c++;
                }
            }
        }
    }
    for (int i = y-1; i>x; i--)
    {
        if(i==y-1){
            for (int j = y-2; j>=x; j--){
                arr[i][j]=c++;
            }
            
        }
        else{
            for (int j = y-2; j>=x; j--){
                if(j==x){
                    arr[i][j]=c++;
                }
            }
            
        }
    }
    x++;
    y--;   
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        cout.width(3);

           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}